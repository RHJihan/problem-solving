// https://www.hackerrank.com/challenges/strange-advertising/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int like = 0, share = 5;
  for (int i = 0; i < n; i++) {
    like += share / 2;
    share = (share / 2) * 3;
  }
  cout << like << '\n';
  return 0;
}