// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4022
#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w",stdout);
#endif
  string input;
  int caseNumber = 1;

  while (true) {
    cin >> input;

    if (input == "*") {
      break;
    }

    if (input == "Hajj") {
      cout << "Case " << caseNumber << ": Hajj-e-Akbar" << endl;
    } else if (input == "Umrah") {
      cout << "Case " << caseNumber << ": Hajj-e-Asghar" << endl;
    }
    caseNumber++;
  }

  return 0;
}
