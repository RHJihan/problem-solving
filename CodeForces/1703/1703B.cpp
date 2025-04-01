// https://codeforces.com/contest/1703/problem/B
#include <iostream>
#include <map>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    map<char, int> freq;
    for (int i = 0; i < n; i++) {
      freq[s[i]]++;
      if (freq[s[i]] == 1) {
        count += 2;
      } else {
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}