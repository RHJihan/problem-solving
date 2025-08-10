#include <iostream>
#include <set>
#include <vector>
using namespace std;

bool prefix(string big, string small) {
  return big.substr(0, small.size()) == small;
}

bool suffix(string big, string small) {
  return big.substr(big.size() - small.size()) == small;
}

bool valid(string &assignment, string &full, vector<string> &segments) {
  for (int i = 0; i < (int)assignment.size(); i++) {
    if (assignment[i] == 'P' && !prefix(full, segments[i])) {
      return false;
    }
    if (assignment[i] == 'S' && !suffix(full, segments[i])) {
      return false;
    }
  }
  return true;
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n;
  cin >> n;

  int total = 2 * (n - 1);
  vector<string> segments(total);

  for (int i = 0; i < total; i++) {
    cin >> segments[i];
  }

  string first, second;

  for (string &str : segments) {
    if ((int)str.length() == n - 1) {
      if (first.empty()) {
        first = str;
      } else {
        second = str;
      }
    }
  }

  for (int i = 0; i < 2; i++) {
    string possible_prefix = first;
    string possible_suffix = second;

    if (i == 1) {
      swap(possible_prefix, possible_suffix);
    }

    string full = possible_prefix + possible_suffix.back();
    string assignment(total, 'S');
    set<string> used;

    for (int j = 0; j < total; j++) {
      string &s = segments[j];
      if (prefix(full, s) && used.count(s) < 1) {
        assignment[j] = 'P';
        used.insert(s);
      }
    }

    if (valid(assignment, full, segments)) {
      cout << assignment << endl;
      return 0;
    }
  }

  return 0;
}
