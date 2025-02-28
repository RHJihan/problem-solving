// https://codeforces.com/contest/918/problem/B
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
// (void)!freopen("output.txt","w",stdout);
#endif

  int n, m;
  cin >> n >> m;
  map<string, string> mp;

  for (int i = 0; i < n; i++) {
    string name, ip;
    cin >> name >> ip;

    mp[ip] = name;
  }

  for (int i = 0; i < m; i++) {
    string command, ip;
    cin >> command >> ip;
    ip.pop_back();

    cout << command << " " << ip << "; " << "#" << mp[ip] << '\n';
  }

  return 0;
}