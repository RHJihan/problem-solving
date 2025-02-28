// https://www.hackerrank.com/challenges/mini-max-sum?isFullScreen=true

#include <bits/stdc++.h>
using namespace std;

int main() {
  int tmp;
  long long max_val = LLONG_MIN, min_val = LLONG_MAX;
  long long sum = 0L;

  for (int i = 0; i < 5; i++) {
    cin >> tmp;
    sum += tmp;
    max_val = max(max_val, (long long)tmp);
    min_val = min(min_val, (long long)tmp);
  }

  cout << sum - max_val << " " << sum - min_val << endl;
  return 0;
}