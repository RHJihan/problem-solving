#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  int arr[n];
  int maximum = 0;
  int maximum_index = -1;
  int minimum = 101;
  int minimum_index = -1;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] > maximum) {
      maximum = arr[i];
      maximum_index = i;
    }
    if (arr[i] <= minimum) { 
      minimum = arr[i];
      minimum_index = i;
    }
  }

  int moves = maximum_index + (n - 1 - minimum_index);
  if (maximum_index > minimum_index) {
    moves--; 
  }

  cout << moves << endl;
  return 0;
}