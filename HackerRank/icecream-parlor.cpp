// https://www.hackerrank.com/challenges/icecream-parlor/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int trip;
  cin >> trip;
  for (int i = 0; i < trip; i++) {
    int dollar, no_of_items;
    cin >> dollar >> no_of_items;
    int ice_cream[no_of_items];
    for (int j = 0; j < no_of_items; j++) {
      cin >> ice_cream[j];
    }

    for (int j = 0; j < no_of_items; j++) {
      for (int k = j+1; k < no_of_items; k++) {
        if (ice_cream[j] + ice_cream[k] == dollar) {
          cout << j+1 << " " << k+1 << endl;
        }
      }
    }
  }

  return 0;
}