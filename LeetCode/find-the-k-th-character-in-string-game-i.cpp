#include <iostream>
using namespace std;

char kthCharacter(int k) {
  string word = "a";

  while ((int)word.size() < k) {
    string next = "";

    for (char ch : word) {
      char nextChar =  (ch - 'a' + 1) % 26 + 'a';
      next += nextChar;
    }

    word += next;
  }

  return word[k - 1];
}

int main() {
  int k = 5;

  cout << kthCharacter(k) << endl;

  return 0;
}
