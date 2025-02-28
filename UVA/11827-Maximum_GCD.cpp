// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2927
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
  for (int i = min(a, b); i > 0; i--) {
    if (a % i == 0 && b % i == 0) {
      return i;
    }
  }
  return 1;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int N;
  cin >> N;
  cin.ignore();

  while (N--) {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> numbers;
    int num;

    while (ss >> num) {
      numbers.push_back(num);
    }

    int max_gcd = 1;

    for (int i = 0; i < numbers.size() - 1; i++) {
      for (int j = i + 1; j < numbers.size(); j++) {
        max_gcd = max(max_gcd, gcd(numbers[i], numbers[j]));
      }
    }

    cout << max_gcd << endl;
  }

  return 0;
}
