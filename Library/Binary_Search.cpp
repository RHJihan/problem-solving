#include <iostream>
using namespace std;

int binary_search(int a[], int e, int l, int r) {
  int mid = l + (r - l) / 2;

  if (l > r)
    return -1;

  if (a[mid] == e)
    return mid;
  else if (a[mid] > e)
    return binary_search(a, e, l, mid - 1);
  else
    return binary_search(a, e, mid + 1, r);
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif
  

  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int find;
  cin >> find;

  int index = binary_search(arr, find, 0, n - 1);
  cout << "found at index: " << index << endl;

  return 0;
}
