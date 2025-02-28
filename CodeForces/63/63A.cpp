// https://codeforces.com/contest/63/problem/A
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<string> rats;
  vector<string> w_c;
  vector<string> men;
  string captain;

  cin.ignore();

  for (int i = 0; i < n; i++) {
    string name, who;
    cin >> name >> who;

    if (who == "rat") {
      rats.push_back(name);
    } else if (who == "woman" || who == "child") {
      w_c.push_back(name);
    } else if (who == "man") {
      men.push_back(name);
    } else if (who == "captain") {
      captain = name;
    }
  }
  int rat_size = rats.size();
  int w_c_size = w_c.size();
  int men_size = men.size();

  for (int i = 0; i < rat_size; i++) {
    cout << rats[i] << '\n';
  }
  for (int i = 0; i < w_c_size; i++) {
    cout << w_c[i] << '\n';
  }
  for (int i = 0; i < men_size; i++) {
    cout << men[i] << '\n';
  }
  cout << captain << '\n';

  return 0;
}
