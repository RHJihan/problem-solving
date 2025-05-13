#include <iostream>
using namespace std;

int lengthOfLastWord(string s) {
  int size = 0;
  int i = (int) s.size() - 1;

  while (i >= 0 && s[i] == ' ') {
    i--;
  }
  while (i >= 0 && s[i] != ' ') {
    size++;
    i--;
  }

  return size;
}

int main() {
  cout << lengthOfLastWord("luffy is still joyboy") << endl;

  return 0;
}
