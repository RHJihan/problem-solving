#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int n, m;
  cin >> n >> m;

  vector<int> A(n);
  vector<int> B(m);

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < m; i++) {
    cin >> B[i];
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < (int)A.size(); j++) {
      if (A[j] == B[i]) {
        A.erase(A.begin() + j);
        break;
      }
    }
  }

  for (int i = 0; i < (int)A.size(); i++) {
    cout << A[i] << " ";
  }
  cout << endl;

  return 0;
}
