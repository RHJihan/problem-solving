#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> fairCandySwap(vector<int> &aliceSizes, vector<int> &bobSizes) {
  int sumA = 0;
  int sumB = 0;

  for (int i = 0; i < (int)aliceSizes.size(); i++) {
    sumA += aliceSizes[i];
  }

  for (int i = 0; i < (int)bobSizes.size(); i++) {
    sumB += bobSizes[i];
  }

  int diff = (sumB - sumA) / 2;

  set<int> bob_set;
  for (int i = 0; i < (int)bobSizes.size(); i++) {
    bob_set.insert(bobSizes[i]);
  }

  for (int i = 0; i < (int)aliceSizes.size(); i++) {
    int a = aliceSizes[i];
    int b = a + diff;

    if (bob_set.find(b) != bob_set.end()) {
      return {a, b};
    }
  }

  return {};
}

int main() {
  vector<int> aliceSizes = {1, 1}, bobSizes = {2, 2};
  vector<int> result = fairCandySwap(aliceSizes, bobSizes);

  for (int i = 0; i < (int)result.size(); i++) {
    cout << result[i] << " ";
  }

  return 0;
}