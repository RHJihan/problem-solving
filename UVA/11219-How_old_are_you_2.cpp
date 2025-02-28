// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2160
#include <iostream>
using namespace std;

int findAge(int current_date, int current_month, int current_year,
            int birth_date, int birth_month, int birth_year) {
  int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (birth_date > current_date) {
    current_date = current_date + month[birth_month - 1];
    current_month = current_month - 1;
  }

  if (birth_month > current_month) {
    current_year = current_year - 1;
    current_month = current_month + 12;
  }

  int calculated_year = current_year - birth_year;

  return calculated_year;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  for (int i = 1; i <= t; i++) {

    int current_date, current_month, current_year;
    int birth_date, birth_month, birth_year;
    string current, birth_input;
    cin >> current >> birth_input;

    current_date = (current[0] - '0') * 10 + (current[1] - '0');
    current_month = (current[3] - '0') * 10 + (current[4] - '0');
    current_year = (current[6] - '0') * 1000 + (current[7] - '0') * 100 +
                   (current[8] - '0') * 10 + (current[9] - '0');

    birth_date = (birth_input[0] - '0') * 10 + (birth_input[1] - '0');
    birth_month = (birth_input[3] - '0') * 10 + (birth_input[4] - '0');
    birth_year = (birth_input[6] - '0') * 1000 + (birth_input[7] - '0') * 100 +
                 (birth_input[8] - '0') * 10 + (birth_input[9] - '0');

    int age = findAge(current_date, current_month, current_year, birth_date,
                      birth_month, birth_year);

    if (age == -1 || current_year < birth_year) {
      cout << "Case #" << i << ": Invalid birth date" << endl;

    }

    else if (age > 130) {
      cout << "Case #" << i << ": Check birth date" << endl;
    } else {
      cout << "Case #" << i << ": " << age << endl;
    }
  }

  return 0;
}