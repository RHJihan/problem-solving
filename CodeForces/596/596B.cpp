#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int ans = 0, temp = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] > temp) {
      ans += (arr[i] - temp);
      temp = arr[i];
    } else if (temp == arr[i])
      continue;
    else {
      ans += (temp - arr[i]);
      temp = arr[i];
    }
  }
  cout << ans << endl;
  return 0;
}
