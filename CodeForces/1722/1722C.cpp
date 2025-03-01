// https://codeforces.com/contest/1722/problem/C
#include <iostream>
#include <map>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    string first[n], second[n], third[n];
    map<string, int> word_count;

    for (int i = 0; i < n; i++) {
      cin >> first[i];
      word_count[first[i]]++;
    }
    for (int i = 0; i < n; i++) {
      cin >> second[i];
      word_count[second[i]]++;
    }
    for (int i = 0; i < n; i++) {
      cin >> third[i];
      word_count[third[i]]++;
    }

    int p1 = 0, p2 = 0, p3 = 0;

    for (int i = 0; i < n; i++) {
      if (word_count[first[i]] == 1)
        p1 += 3;
      else if (word_count[first[i]] == 2)
        p1 += 1;
    }
    for (int i = 0; i < n; i++) {
      if (word_count[second[i]] == 1)
        p2 += 3;
      else if (word_count[second[i]] == 2)
        p2 += 1;
    }
    for (int i = 0; i < n; i++) {
      if (word_count[third[i]] == 1)
        p3 += 3;
      else if (word_count[third[i]] == 2)
        p3 += 1;
    }

    cout << p1 << " " << p2 << " " << p3 << endl;
  }
  return 0;
} 0;
}