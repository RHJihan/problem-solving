#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int n;
  cin >> n;
  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  map<int, int> last;
  for (int i = 0; i < n; i++) {
    last[a[i]] = i;
  }

  vector<int> result;
  for (int i = 0; i < n; i++) {
    if (last[a[i]] == i) {
      result.push_back(a[i]);
    }
  }

  cout << result.size() << endl;
  for (int i = 0; i < (int)result.size(); i++) {
    cout << result[i] << " ";
  }
  cout << endl;

  return 0;
}
