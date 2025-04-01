#include <iostream>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

vector<int> powers;

void pre_calc_power() {
  for (int i = 0; i <= 30; i++) {
    int n = pow(2, i); 
    powers.push_back(n);
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  pre_calc_power();

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  map<int, int> freq;
  for (int i = 0; i < n; i++) {
    freq[arr[i]]++;
  }

  int count = 0;

  for (int i = 0; i < n; i++) {
    int num = arr[i];
    bool found = false;

    for (int j = 0; j < (int)powers.size(); j++) {
      int complement = powers[j] - num;

      if (complement != num && freq.find(complement) != freq.end()) {
        found = true;
        break;
      } else if (complement == num && freq[num] > 1) {
        found = true;
        break;
      }
    }

    if (!found) {
      count++;
    }
  }

  cout << count << endl;
  
  return 0;
}