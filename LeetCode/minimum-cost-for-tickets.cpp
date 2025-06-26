#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  vector<int> days = {1, 4, 6, 7, 8, 20}, cost = {2, 7, 15};
  cout << mincostTickets(days, cost) << endl;

  return 0;
}