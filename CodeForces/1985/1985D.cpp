// https://codeforces.com/contest/1985/problem/D
#include <cmath>
#include <iostream>
using namespace std;

int findCenter(string s, int max_hash_count) {
  int center;
  int middle = ceil(max_hash_count / 2.0);
  int count = 0;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '#')
      count++;
    if (count == middle) {
      center = i + 1;
      break;
    }
  }

  return center;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    int max_hash_count = 0;
    string max_hash_string = "";
    int max_row;
    for (int i = 1; i <= n; i++) {
      // string s;
      // cin >> s;
      // int current_hash_count = 0;
      // string current_hash_count_string = "";

      
      for (int j = 0; j < m; j++) {
        char tmp;
        cin >> tmp;
        cout << tmp;
        // if (s[j] == '#') {
        //   current_hash_count++;
        //   current_hash_count_string = s;
        // }
      }
      cout << endl;

      // if (max_hash_count < current_hash_count) {
      //   max_hash_count = current_hash_count;
      //   max_hash_string = current_hash_count_string;
      //   max_row = i;
      // }
    }

    cout << max_row << " ";
    cout << findCenter(max_hash_string, max_hash_count) << '\n';
  }

  return 0;
}

  return 0;
}