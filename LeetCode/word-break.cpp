#include <iostream>
#include <set>
#include <vector>
using namespace std;

string substring(string &s, int start, int size) {
  string result = "";
  for (int i = start; i < start + size && i < (int)s.size(); i++) {
    result += s[i];
  }
  return result;
}

bool wordBreak(string s, vector<string> &wordDict) {
  set<string> word_dict_set(wordDict.begin(), wordDict.end());
  vector<bool> dp(s.size() + 1, false);
  dp[0] = true;

  for (int i = 1; i <= (int)s.size(); i++) {
    for (int j = 0; j < i; ++j) {
      string word = substring(s, j, i - j); 
      if (dp[j] && word_dict_set.find(word) != word_dict_set.end()) {
        dp[i] = true;
        break;
      }
    }
  }

  return dp[s.size()];
}

int main() {
  string s = "applepenapple";
  vector<string> wordDict = {"apple", "pen"};

  if (wordBreak(s, wordDict))
    cout << "true" << endl;
  else
    cout << "false" << endl;

  return 0;
}
