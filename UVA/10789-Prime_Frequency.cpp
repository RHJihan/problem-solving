// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1730
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

bool isPrime(int n) {
  if (n < 2) {
    return false;
  }
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int T;
  cin >> T;

  for (int t = 1; t <= T; t++) {
    string input;
    cin >> input;

    map<char, int> freq;

    for (int i = 0; i < input.size(); i++) {
      freq[input[i]]++;
    }

    vector<char> result;

    for (auto it = freq.begin(); it != freq.end(); it++) {
      if (isPrime(it->second)) {
        result.push_back(it->first);
      }
    }

    sort(result.begin(), result.end());

    cout << "Case " << t << ": ";
    if (result.empty()) {
      cout << "empty";
    } else {
      for (int i = 0; i < result.size(); i++) {
        cout << result[i];
      }
    }
    cout << endl;
  }

  return 0;
}
