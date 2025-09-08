#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    long long k, x;
    cin >> k >> x;

    long long total = (long long)pow(2.0, k + 1);

    long long cho = x;
    long long van = total - x;

    vector<long long> vec;

    while (cho != van) {
      if (cho < van) {
        vec.push_back(1);
        van -= cho;
        cho += cho;
      } else {
        vec.push_back(2);
        cho -= van;
        van += van;
      }
    }

    reverse(vec.begin(), vec.end());

    cout << vec.size() << endl;
    for (int i = 0; i < (int) vec.size(); i++) {
      cout << vec[i] << " ";
    }
    cout << endl;
  }

  return 0;
}
