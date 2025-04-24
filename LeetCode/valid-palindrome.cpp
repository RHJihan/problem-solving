// https://leetcode.com/problems/valid-palindrome/description/
#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
  string cleaned = "";
  for (int i = 0; i < (int)s.length(); i++) {
    if (isalnum(s[i])) {
      char lowerChar = tolower(s[i]);
      cleaned += lowerChar;
    }
  }

  int left = 0;
  int right = cleaned.length() - 1;

  while (left < right) {
    if (cleaned[left] != cleaned[right]) {
      return false;
    }
    left++;
    right--;
  }

  return true;
}

int main() {
  string s;

  getline(cin, s);

  if (isPalindrome(s)) {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }

  return 0;
}
