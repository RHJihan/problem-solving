// https://www.hackerrank.com/challenges/missing-numbers/problem

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  int n, m;

  map<int, int> arr;
  map<int, int> brr;

  cin >> n;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    arr[input]++;
  }

  cin >> m;
  for (int i = 0; i < m; i++) {
    int input;
    cin >> input;
    brr[input]++;
  }

  vector<int> missing;

  for (map<int, int>::iterator it = brr.begin(); it != brr.end(); it++) {
    if (it->first == arr[it->first]) {
      int count = brr[it->second] - arr[it->second];
      if (count > 0) {
        for (int i = 0; i < count; i++) {
          missing.push_back(it->first);
        }
      }
    }
  }

  for (int i : missing)
    cout << i << " ";

  return 0;
}