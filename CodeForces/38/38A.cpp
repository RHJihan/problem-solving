#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  vector<int> years(n - 1); 
  for (int i = 0; i < n - 1; i++) {
    cin >> years[i]; 
  }

  int a, b;
  cin >> a >> b;

  int total = 0;
  for (int i = a - 1; i < b - 1; i++) {
    total += years[i]; 
  }

  cout << total << endl;

  return 0;
}
