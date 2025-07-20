#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Software {
  int a;
  int b;
};

bool compareByRamNeeded(Software s1, Software s2) {
  return s1.a < s2.a;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<Software> softwares(n);

    for (int i = 0; i < n; i++) {
      cin >> softwares[i].a;
    }

    for (int i = 0; i < n; i++) {
      cin >> softwares[i].b;
    }

    sort(softwares.begin(), softwares.end(), compareByRamNeeded);

    for (int i = 0; i < n; i++) {
      if (softwares[i].a <= k) {
        k += softwares[i].b;
      }
    }

    cout << k << endl;
  }

  return 0;
}
