// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=967
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Job {
  int index;
  int time;
  int fine;
};

bool compareJobs(const Job &a, const Job &b) {
  double ratioA = (double)a.fine / a.time;
  double ratioB = (double)b.fine / b.time;

  if (ratioA != ratioB)
    return ratioA > ratioB;

  return a.index < b.index;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
#endif

  int t;
  cin >> t;
  cin.ignore();
  cin.ignore();

  while (t--) {
    int N;
    cin >> N;

    vector<Job> jobs;

    for (int i = 1; i <= N; i++) {
      Job job;
      job.index = i;
      cin >> job.time >> job.fine;
      jobs.push_back(job);
    }

    sort(jobs.begin(), jobs.end(), compareJobs);

    for (int i = 0; i < N; i++) {
      if (i > 0)
        cout << " ";
      cout << jobs[i].index;
    }
    cout << "\n";

    if (t)
      cout << "\n";
  }

  return 0;
}
