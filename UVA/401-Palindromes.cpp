// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=342
#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, char> mirror = {
    {'A', 'A'}, {'E', '3'}, {'H', 'H'}, {'I', 'I'}, {'J', 'L'}, {'L', 'J'},
    {'M', 'M'}, {'O', 'O'}, {'S', '2'}, {'T', 'T'}, {'U', 'U'}, {'V', 'V'},
    {'W', 'W'}, {'X', 'X'}, {'Y', 'Y'}, {'Z', '5'}, {'1', '1'}, {'2', 'S'},
    {'3', 'E'}, {'5', 'Z'}, {'8', '8'}};

bool is_palindrome(string &s) {
  int len = s.size();
  for (int i = 0; i < len / 2; i++) {
    if (s[i] != s[len - 1 - i]) {
      return false;
    }
  }
  return true;
}

bool is_mirrored(string &s) {
  int len = s.size();
  for (int i = 0; i <= len / 2; i++) {
    if (mirror.find(s[i]) == mirror.end() || mirror[s[i]] != s[len - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  string input;
  while (cin >> input) {
    bool palindrome = is_palindrome(input);
    bool mirrored = is_mirrored(input);

    cout << input;
    if (palindrome && mirrored) {
      cout << " -- is a mirrored palindrome.";
    } else if (palindrome) {
      cout << " -- is a regular palindrome.";
    } else if (mirrored) {
      cout << " -- is a mirrored string.";
    } else {
      cout << " -- is not a palindrome.";
    }
    cout << endl << endl;
  }
  return 0;
}
