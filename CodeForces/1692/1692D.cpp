#include <iostream>
#include <set>
using namespace std;

bool palindrome(const string &time) {
  if (time[0] == time[4] && time[1] == time[3]) {
    return true;
  }
  return false;
}

string time_string(int hour, int minute) {
  string time = "";
  if (hour < 10) {
    time += '0';
    time += (char)(hour + '0');
  } else {
    int tmp = hour;
    int right = tmp / 10;
    int left = tmp % 10;
    time += (char)(right + '0');
    time += (char)(left + '0');
  }
  time += ':';
  if (minute < 10) {
    time += '0';
    time += (char)(minute + '0');
  } else {
    int tmp = minute;
    int right = tmp / 10;
    int left = tmp % 10;
    time += (char)(right + '0');
    time += (char)(left + '0');
  }

  return time;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    string s;
    int x;
    cin >> s >> x;

    int hour = (s[0] - '0') * 10 + (s[1] - '0');
    int minute = (s[3] - '0') * 10 + (s[4] - '0');

    set<string> palindrome_seen;
    set<string> times;

    while (true) {
      string time = time_string(hour, minute);

      if (palindrome(time)) {
        palindrome_seen.insert(time);
      }

      if (times.find(time) != times.end()) {
        break;
      }
      times.insert(time);

      int total_minutes = hour * 60 + minute + x;
      hour = (total_minutes / 60) % 24;
      minute = total_minutes % 60;
    }

    cout << palindrome_seen.size() << endl;
  }

  return 0;
}
