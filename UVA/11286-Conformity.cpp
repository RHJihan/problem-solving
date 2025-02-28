// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2261
#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  while (true) {
    int n;
    cin >> n;

    if (n == 0) {
      break;
    }

    map<vector<int>, int> mp;

    for (int i = 0; i < n; i++) {
      vector<int> courses;
      for (int j = 0; j < 5; j++) {
        int input;
        cin >> input;
        courses.push_back(input);
      }
      sort(courses.begin(), courses.end());
      mp[courses]++;
    }

    int popular = 0;
    int total = 0;

    for (auto it : mp) {
      int count = it.second;
      if (count > popular) {
        popular = count;
        total = count;
      } else if (count == popular) {
        total += count;
      }
    }
    cout << total << '\n';
  }

  return 0;
}
