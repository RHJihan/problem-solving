// https://codeforces.com/contest/1703/problem/D
#include <iostream>
#include <set>
#include <vector>
using namespace std;

string sub_string(string &s, int start, int length) {
  string result = "";
  for (int i = start; i < start + length; i++) {
    result += s[i];
  }
  return result;
}

bool possible(string &s, set<string> &string_list_unique) {
  int len = (int)s.size();
  for (int i = 1; i < len; i++) {
    string left = sub_string(s, 0, i);
    string right = sub_string(s, i, len - i);
    bool left_found = string_list_unique.find(left) != string_list_unique.end();
    bool right_found = string_list_unique.find(right) != string_list_unique.end();
    if (left_found && right_found) {
      return true;
    }
  }
  return false;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<string> string_list(n);
    set<string> string_list_unique;

    for (int i = 0; i < n; i++) {
      cin >> string_list[i];
      string_list_unique.insert(string_list[i]);
    }

    string result = "";
    for (int i = 0; i < n; i++) {
      string current = string_list[i];

      if (possible(current, string_list_unique)) {
        result += '1';
      } else {
        result += '0';
      }
    }
    cout << result << endl;
  }
  return 0;
}