// https://codeforces.com/contest/1352/problem/A
#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<int> vector;
    int place = 1;

    while (n > 0) {
      int digit = n % 10;
      if (digit > 0) {
        vector.push_back(digit * place);
      }
      n /= 10;
      place *= 10;
    }

    cout << vector.size() << endl;
    for (int i = 0; i < vector.size(); i++) {
      cout << vector[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
