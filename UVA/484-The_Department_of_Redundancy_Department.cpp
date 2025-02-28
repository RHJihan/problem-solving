// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=425
#include <algorithm>
#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

int main() {
  vector<int> numbers;
  map<int, int> freq;
  int tmp;
  while (cin >> tmp) {
    if (freq.count(tmp) == 0) {
      numbers.push_back(tmp);
    }
    freq[tmp]++;
  }

  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << " " << freq[numbers[i]] << '\n';
  }

  return 0;
}
