#include <iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int N, A, B;
  string S;

  cin >> N >> A >> B;
  cin >> S;

  cout << S.substr(A, N - A - B) << endl;

  return 0;
}
