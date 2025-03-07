#include <iostream>
#include <map>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<int, int> stud;
    for (int i = 0; i < n; i++) {
      int s;
      cin >> s;
      stud[s]++;
    }

    int unique_skills = (int)stud.size();
    int max_same = 0;
    for (auto it = stud.begin(); it != stud.end(); it++) {
      if (it->second > max_same) {
        max_same = it->second;
      }
    }

    int max_team_size = min(unique_skills, max_same);
    if (unique_skills == max_same) {
      max_team_size = unique_skills - 1;
    }

    cout << max_team_size << endl;
  }

  return 0;
}