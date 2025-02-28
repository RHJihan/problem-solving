// https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr[26], max_height = 0;
  string s;
  for (int i = 0; i < 26; i++) {
    cin >> arr[i];
  }
  cin >> s;

  for (int i = 0; i < (int)s.size(); i++) {
    max_height = max(max_height, arr[s[i] - 'a']);
  }

  cout << max_height * s.size() << endl;

  return 0;
}