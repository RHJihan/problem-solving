#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <vector>
using namespace std;

set<string> words;
map<string, int> transformation;

bool letter_diff(string &a, string &b) {
  if (a.length() != b.length()) {
    return false;
  }
  int diff = 0;
  for (int i = 0; i < (int)a.length(); i++) {
    if (a[i] != b[i]) {
      diff++;
      if (diff > 1)
        return false;
    }
  }
  return diff == 1;
}

void dfs(string &current, string &target, int steps) {
  if (transformation.find(current) != transformation.end() && transformation[current] <= steps) {
    return;
  }
  transformation[current] = steps;
  if (current == target)
    return;

  for (auto it = words.begin(); it != words.end(); it++) {
    string word = *it;
    if (letter_diff(current, word)) {
      dfs(word, target, steps + 1);
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int test;
  cin >> test;
  while (test--) {
    words.clear();
    string word;
    while (cin >> word) {
      if (word == "*") {
        break;
      }
      words.insert(word);
    }
    cin.ignore();

    string line;
    while (getline(cin, line)) {
      if (line.empty()) {
        break;
      }
      stringstream ss(line);
      string start, target;
      ss >> start >> target;

      transformation.clear();
      dfs(start, target, 0);

      cout << start << " " << target << " " << transformation[target] << endl;
    }
    if (test) {
      cout << endl;
    }
  }
  return 0;
}
