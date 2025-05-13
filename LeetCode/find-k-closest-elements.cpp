#include <iostream>
#include <vector>
using namespace std;

vector<int> findClosestElements(vector<int> &arr, int k, int x) {
  int left = 0;
  int right = (int) arr.size() - k;

  while (left < right) {
    int mid = (left + right) / 2;
    if (x - arr[mid] > arr[mid + k] - x) {
      left = mid + 1;
    } else {
      right = mid;
    }
  }

  vector<int> result(arr.begin() + left, arr.begin() + left + k);
  return result;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  int k = 4, x = 3;

  vector<int> result = findClosestElements(arr, k, x);

  for (int num : result) {
    cout << num << " ";
  }

  return 0;
}
