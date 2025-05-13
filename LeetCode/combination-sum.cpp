#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
  vector<vector<vector<int>>> dp(target + 1);

  dp[0].push_back({});

  for (int i = 0; i < (int)candidates.size(); i++) {
    int num = candidates[i];
    for (int j = num; j <= target; ++j) {
      for (int k = 0; k < (int)dp[j - num].size(); k++) {
        vector<int> comb = dp[j - num][k];
        comb.push_back(num);
        dp[j].push_back(comb);
      }
    }
  }

  return dp[target];
}

int main() {

  vector<int> candidates = {2, 3, 6, 7};
  int target = 7;

  vector<vector<int>> result = combinationSum(candidates, target);

  for (auto combination : result) {
    cout << "[";
    for (int num : combination) {
      cout << num << " ";
    }
    cout << "]" << endl;
  }

  return 0;
}
