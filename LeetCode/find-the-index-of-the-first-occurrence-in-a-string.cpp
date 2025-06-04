#include <iostream>
using namespace std;

int strStr(string haystack, string needle) {
  if (needle.empty()) {
    return 0;
  }

  int n = (int)haystack.size();
  int m = (int)needle.size();

  for (int i = 0; i <= n - m; i++) {
    int j = 0;
    while (j < m && haystack[i + j] == needle[j]) {
      j++;
    }

    if (j == m) {
      return i;
    }
  }

  return -1;
}

int main() {

  cout << strStr("sadbutsad", "sad") << endl;

  return 0;
}