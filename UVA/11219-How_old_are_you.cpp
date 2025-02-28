// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2160
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  int T;
  cin >> T;
  cin.ignore();
  for (int t = 1; t <= T; t++) {
    string currentDate, birthDate;
    cin.ignore();
    getline(cin, currentDate);
    getline(cin, birthDate);

    int currentDay, currentMonth, currentYear;
    stringstream ssCurrent(currentDate);
    char slash;
    ssCurrent >> currentDay >> slash >> currentMonth >> slash >> currentYear;

    int birthDay, birthMonth, birthYear;
    stringstream ssBirth(birthDate);
    ssBirth >> birthDay >> slash >> birthMonth >> slash >> birthYear;

    int age = currentYear - birthYear;

    if (currentMonth < birthMonth ||
        (currentMonth == birthMonth && currentDay < birthDay)) {
      age--;
    }

    cout << "Case #" << t << ": ";

    if (birthYear > currentYear ||
        (birthYear == currentYear &&
         (birthMonth > currentMonth ||
          (birthMonth == currentMonth && birthDay > currentDay)))) {
      cout << "Invalid birth date" << endl;
    } else if (age > 130) {
      cout << "Check birth date" << endl;
    } else if (age == 0) {
      cout << "0" << endl;
    } else {
      cout << age << endl;
    }
  }

  return 0;
}
