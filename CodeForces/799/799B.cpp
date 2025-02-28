// https://codeforces.com/contest/799/problem/B
#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt", "w", stdout);
#endif

  int n;
  cin >> n;
  map<int, set<int>> color_map;
  map<int, set<int>> price;
  vector<int> order;

  for (int i = 0; i < n; i++) {
    int p;
    cin >> p;
    price[p] = set<int>();
    order.push_back(p);
  }

  for (int i = 0; i < 2 * n; i++) {
    int color;
    cin >> color;
    price[order[i % n]].insert(color);
    color_map[color].insert(order[i % n]);
  }

  int totalCus;
  cin >> totalCus;
  // cout << "##########\n";
  // for (auto it = color_map.begin(); it != color_map.end(); it++) {
  //   cout << "color: " << it->first << " = ";
  //   for (auto j = it->second.begin(); j != it->second.end(); j++) {
  //     cout << *j << " ";
  //   }
  //   cout << '\n';
  // }

  // cout << "##########\n";

  for (int i = 0; i < totalCus; i++) {
    int pref;
    cin >> pref;


    if (color_map[pref].size() != 0) {
      auto selected = color_map[pref].begin();
      int sel_val = *selected;
      int c1 = *price[sel_val].begin();
      int c2 = *next(price[sel_val].begin(), 1);

      color_map[c1].erase(sel_val);
      color_map[c2].erase(sel_val);

      // cout << "cus " << i + 1 << " pref " << pref << " bought " << sel_val
      //      << endl;
      cout << sel_val << " ";
    } else {
      cout << -1 << " ";
    }
  }

  return 0;
}
