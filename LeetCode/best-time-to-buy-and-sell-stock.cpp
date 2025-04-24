#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int max_profit(vector<int> &prices) {
  int min_price = INT_MAX;
  int max_profit = 0;

  for (int i = 0; i < (int)prices.size(); i++) {
    if (prices[i] < min_price) {
      min_price = prices[i];
    } else {
      int profit = prices[i] - min_price;
      if (profit > max_profit) {
        max_profit = profit;
      }
    }
  }

  return max_profit;
}

int main() {
  vector<int> prices = {7, 1, 5, 3, 6, 4};
  cout << max_profit(prices) << endl;
  return 0;
}
