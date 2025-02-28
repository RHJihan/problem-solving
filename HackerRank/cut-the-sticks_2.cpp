// https://www.hackerrank.com/challenges/cut-the-sticks/problem

#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {

    int count = 0;
    for (int i = 0; i < n; i++) {
      if (arr[i] > 0) {
        count++;
      }
    }
    if (i != 0 && count == 0) {
      break;
    }
    cout << count << '\n';

    int shortest_stick = 10001;
    for (int i = 0; i < n; i++) {
      if (arr[i] < shortest_stick && arr[i] > 0) {
        shortest_stick = arr[i];
      }
    }

    for (int i = 0; i < n; i++) {
      if (arr[i] == shortest_stick) {
        arr[i] = 0;
      }
      if (arr[i] != 0) {
        arr[i] -= shortest_stick;
      }
    }
  }

  return 0;
}