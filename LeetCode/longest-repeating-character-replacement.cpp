#include <iostream>
#include <vector>
using namespace std;

int characterReplacement(string s, int k) {
  vector<int> count(26, 0);
  int max_count = 0;
  int left = 0;
  int result = 0;

  for (int right = 0; right < (int)s.size(); right++) {
    count[s[right] - 'A']++;
    max_count = max(max_count, count[s[right] - 'A']);

    while ((right - left + 1) - max_count > k) {
      count[s[left] - 'A']--;
      left++;
    }

    result = max(result, right - left + 1);
  }

  return result;
}

int main() {
  string s1 = "ABAB";
  int k1 = 2;
  cout << characterReplacement(s1, k1) << endl;

  return 0;
}
