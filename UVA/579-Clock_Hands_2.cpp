// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=520
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int buildInt(string s) {
  int result = 0;
  for (int i = 0; i < s.size(); i++) {
    result = result * 10 + (s[i] - '0');
  }
  return result;
}

double calculateAngle(int hour, int minute) {
  double minuteAngle = minute * 6.0;
  double hourAngle = hour * 30.0 + minute * 0.5;
  double angle = fabs(hourAngle - minuteAngle);

  if (angle > 180.0) {
    angle = 360.0 - angle;
  }

  return angle;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  string time;

  while (true) {
    cin >> time;

    if (time == "0:00") {
      break;
    }

    string h_s, m_s;
    int hour, minute;
    bool colon = false;

    for (int i = 0; i < time.size(); i++) {
      if (time[i] == ':') {
        colon = true;
      } else if (!colon) {
        h_s += time[i];
      } else {
        m_s += time[i];
      }
    }

    hour = buildInt(h_s);
    minute = buildInt(m_s);

    double angle = calculateAngle(hour, minute);

    cout << fixed << setprecision(3) << angle << '\n';
  }

  return 0;
}
