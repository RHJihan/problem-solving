#include <iostream>
using namespace std;

int parse(const string &s, int start, int length) {
  int num = 0;
  for (int i = 0; i < length; i++) {
    num = num * 10 + (s[start + i] - '0');
  }
  return num;
}

bool leap_year(int year) {
  return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int dayOfYear(string date) {
  int year = parse(date, 0, 4);
  int month = parse(date, 5, 2);
  int day = parse(date, 8, 2);

  int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (leap_year(year)) {
    month_days[1] = 29;
  }

  int day_year = 0;
  for (int i = 0; i < month - 1; i++) {
    day_year += month_days[i];
  }

  day_year += day;
  return day_year;
}

int main() {
  cout << dayOfYear("2019-01-09") << endl;

  return 0;
}