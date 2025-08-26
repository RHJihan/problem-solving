#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  int maxProfit(vector<int> &prices) {
    int profit = 0;
    int start = prices[0];
    for (int i = 1; i < (int)prices.size(); i++) {
      if (start < prices[i]) {
        profit += prices[i] - start;
      }
      start = prices[i];
    }
    return profit;
  }
};

int main() {
  Solution sol;
  vector<int> prices = {7, 1, 5, 3, 6, 4};
  cout << sol.maxProfit(prices) << endl;

  return 0;
}