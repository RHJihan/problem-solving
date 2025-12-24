// https://codeforces.com/gym/106270/problem/F

#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);

#endif

  int t;
  cin >> t;

  while (t--) {
    int L, v0, T, N;
    cin >> L >> v0 >> T >> N;

    vector<long long> answers(N);

    for (int i = 0; i < N; i++) {
      long long ti, vi;
      cin >> ti >> vi;

      long long rel_speed = abs(v0 - vi);

      long long distance_covered_relative = (T - ti) * rel_speed;

      long long extra_meetings = distance_covered_relative / L;

      long long total = extra_meetings + 1;

      answers[i] = total;
    }

    for (int i = 0; i < N; i++) {
      if (i)
        cout << " ";
      cout << answers[i];
    }
    cout << endl;
  }

  return 0;
}