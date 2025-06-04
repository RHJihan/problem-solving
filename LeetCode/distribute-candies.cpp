#include <iostream>
#include <set>
#include <vector>
using namespace std;

int distributeCandies(vector<int> &candyType) {
  set<int> unique;

  for (int i = 0; i < (int)candyType.size(); i++) {
    unique.insert(candyType[i]);
  }

  int max_eat = (int)candyType.size() / 2;

  if ((int)unique.size() < max_eat) {
    return unique.size();
  }
  return max_eat;
}

int main() {
  vector<int> candyType = {1, 1, 2, 2, 3, 3};
  cout << distributeCandies(candyType);

  return 0;
}