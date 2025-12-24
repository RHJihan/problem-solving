#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s) {
  string t = s;
  reverse(t.begin(), t.end());
  return s == t;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    if (palindrome(s)) {
      cout << 0 << endl
           << endl;
      continue;
    }

    string rem1 = "";
    for (char c : s)
      if (c != '0')
        rem1 += c;

    if (palindrome(rem1)) {
      vector<int> indices;
      for (int i = 0; i < n; i++)
        if (s[i] == '0')
          indices.push_back(i + 1);
      cout << indices.size() << endl;
      for (int i = 0; i < (int)indices.size(); i++)
        cout << indices[i] << (i + 1 == (int)indices.size() ? '\n' : ' ');
      continue;
    }

    string rem2 = "";
    for (char c : s)
      if (c != '1')
        rem2 += c;

    if (palindrome(rem2)) {
      vector<int> indices;
      for (int i = 0; i < n; i++)
        if (s[i] == '1')
          indices.push_back(i + 1);
      cout << indices.size() << endl;
      for (int i = 0; i < (int)indices.size(); i++)
        cout << indices[i] << (i + 1 == (int)indices.size() ? '\n' : ' ');
      continue;
    }

    cout << -1 << endl;
  }
  return 0;
}
