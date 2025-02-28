// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2525
#include <iostream>
#include <map>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int T;
  cin >> T;
  cin.ignore();

  map<char, int>
      keyPresses =
          {
              {'a', 1}, {'b', 2}, {'c', 3}, {'d', 1}, {'e', 2}, {'f', 3},
              {'g', 1}, {'h', 2}, {'i', 3}, {'j', 1}, {'k', 2}, {'l', 3},
              {'m', 1}, {'n', 2}, {'o', 3}, {'p', 1}, {'q', 2}, {'r', 3},
              {'s', 4}, {'t', 1}, {'u', 2}, {'v', 3}, {'w', 1}, {'x', 2},
              {'y', 3}, {'z', 4}, {' ', 1}
          };

  for (int case_count = 1; case_count <= T; case_count++) {
    string message;
    getline(cin, message);

    int totalPresses = 0;
    for (int i = 0; i < message.length(); i++) {
      totalPresses += keyPresses[message[i]];
    }

    cout << "Case #" << case_count << ": " << totalPresses << '\n';
  }

  return 0;
}
