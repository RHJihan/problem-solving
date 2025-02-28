// https://www.hackerrank.com/challenges/bon-appetit/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int item, not_eat, sum = 0;
  cin >> item >> not_eat;
  int food[item];
  for (int i = 0; i < item; i++) {
    cin >> food[i];
    if (i != not_eat) {
      sum += food[i];
    }
  }
  int given;
  cin >> given;

  if (given == sum / 2) {
    cout << "Bon Appetit" << endl;
  } else {
    cout << given - sum/2 << endl;
  }

  return 0;
}