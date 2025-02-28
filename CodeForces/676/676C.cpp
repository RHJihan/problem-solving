// https://codeforces.com/contest/676/problem/C
#include <iostream>
using namespace std;

int find(string s, int n, int k, char key) {
  int left = 0, right = 0, max_length = 0, count = 0;

  while (right < n) {
    if (s[right] != key) {
      count++;
    }

    while (count > k) {
      if (s[left] != key) {
        count--;
      }
      left++;
    }

    max_length = max(max_length, right - left + 1);
    right++;
  }

  return max_length;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int max_a = find(s, n, k, 'a');
  int max_b = find(s, n, k, 'b');

  cout << max(max_a, max_b) << endl;
  return 0;
}