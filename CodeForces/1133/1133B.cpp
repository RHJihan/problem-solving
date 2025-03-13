#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int n, k;
  cin >> n >> k;
  vector<int> candies(n);

  for (int i = 0; i < n; i++) {
    cin >> candies[i];
  }

  map<int, int> rest;

  for (int i = 0; i < (int)candies.size(); i++) {
    rest[candies[i] % k]++;
  }

  int max_box = (rest[0] / 2) * 2;

  for (int i = 1; i <= k / 2; i++) {
    if (i == k - i) {
      max_box += (rest[i] / 2) * 2;
    } else {
      max_box += min(rest[i], rest[k - i]) * 2;
    }
  }

  cout << max_box << endl;
  
  return 0;
}