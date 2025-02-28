// https://www.hackerrank.com/challenges/lonely-integer/problem

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

  vector<int> freq(101, 0);
  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
  }

  for (int i = 0; i < 101; i++) {
    if (freq[i] == 1) {
      cout << i << '\n';
      break;
    }
  }

  return 0;
}
