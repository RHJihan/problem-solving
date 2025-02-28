// https://codeforces.com/contest/832/problem/B
#include <iostream>
#include <set>
#include <string>
using namespace std;
set<char> good_list;

bool isGood(char c) { return good_list.find(c) != good_list.end(); }

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
// freopen("output.txt","w",stdout);
#endif

  string good;

  string pattern;
  cin >> good >> pattern;

  for (int i = 0; i < good.size(); i++) {
    good_list.insert(good[i]);
  }

  int ast = -1;

  for (int i = 0; i < pattern.size(); i++) {
    if (pattern[i] == '*') {
      ast = i;
      break;
    }
  }

  int t;
  cin >> t;

  while (t--) {
    string test;
    cin >> test;

    int ast_len = test.size() - pattern.size() + 1;
    if (ast == -1 && (test.size() != pattern.size())) {
      cout << "NO" << '\n';
      continue;
    }

    if (ast_len <= -1) {
      cout << "NO" << '\n';
      continue;
    }


    bool match = true;
    for (int i = 0, k = 0; i < test.size() && k < pattern.size(); i++, k++) {
      // cout << "currently working on " << test[i] << endl;
      if ((pattern[k] == '?') && !isGood(test[i])) {
        match = false;
        // cout << "here1" << endl;
        break;
      } else if ((pattern[k] == '*')) {
        int j;
        for (j = i; j < ast_len + i; j++) {
          if (isGood(test[j])) {
            match = false;
            break;
          }
        }
        i = j - 1;

        // abbxycba

        // cout << "here2" << endl;
        if (!match)
          break;

      } else if ((pattern[k] != '?') && (pattern[k] != '*') &&
                 (pattern[k] != test[i])) {

        // cout << pattern[k] << " " << test[i] << endl;
        match = false;
        // cout << "here3" << endl;
        break;
      }
    }

    cout << (match ? "YES" : "NO") << '\n';
  }

  return 0;
}