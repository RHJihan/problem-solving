#include <iostream>
#include <string>
using namespace std;

int longestSubsequence(string s, int k) {
  int sum = 0;
  int count = 0;
  int max_bits = 0;

  int temp = k;
  while (temp > 0) {
    temp /= 2;
    max_bits++;
  }

  for (int i = 0; i < s.size(); ++i) {
    char ch = s[s.size() - 1 - i];

    if (ch == '1') {
      if (i < max_bits && sum + (1 << i) <= k) {
        sum += (1 << i);
        count++;
      }
    } else {
      count++;
    }
  }

  return count;
}

int main() {
  string s = "1001010";
  int k = 5;
  cout << longestSubsequence(s, k) << endl;

  return 0;
}
