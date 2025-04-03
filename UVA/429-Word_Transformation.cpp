#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
//   (void)!freopen("output.txt","w", stdout);
#endif

  int test;
  cin >> test;
  while (test--) {
    set<string> words;
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
      string s, t;
      ss >> s >> t;

      queue<string> q;
      map<string, int> transformation;

      transformation[s] = 0;
      q.push(s);
      bool found = false;

      while (!q.empty() && !found) {
        string u = q.front();
        q.pop();

        for (auto it = words.begin(); it != words.end(); it++) {
          const string &current = *it;
          if (!transformation.count(current) && u.length() == current.length()) {
            int diff = 0;
            for (int j = 0; j < (int)u.length(); j++)
              if (u[j] != current[j]) {
                diff++;
              }

            if (diff == 1) {
              transformation[current] = transformation[u] + 1;
              q.push(current);
              if (current == t) {
                found = true;
                break;
              }
            }
          }
        }
      }

      cout << s << " " << t << " " << transformation[t] << endl;
    }
    if (test != 0) {
      cout << endl;
    }
  }
  return 0;
}
