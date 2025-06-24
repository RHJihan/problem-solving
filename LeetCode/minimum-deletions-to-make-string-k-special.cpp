#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int minimumDeletions(string word, int k) {
  map<char, int> freq;

  for (char c : word) {
    freq[c]++;
  }
  int result = (int)word.size();
  for (auto a : freq) {
    int rm = 0;
    for (auto b : freq) {
      if (a.second > b.second) {
        rm += b.second;
      } else if (b.second > a.second + k) {
        rm += b.second - (a.second + k);
      }
    }
    result = min(rm, result);
  }

  return result;
}

int main() {
  string s = "dabdcbdcdcd";
  int k = 2;

  cout << minimumDeletions(s, k) << endl;

  return 0;
}