#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];
bool cat[MAXN];
bool visited[MAXN];
int n, m;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    cin >> cat[i];
  }

  for (int i = 0; i < n - 1; i++) {
    int x, y;
    cin >> x >> y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  queue<pair<int, int>> q;
  q.push({1, cat[1]});
  visited[1] = true;
  int valid = 0;

  while (!q.empty()) {
    auto [node, count] = q.front();
    q.pop();

    bool leaf = true;

    for (int i = 0; i < (int)adj[node].size(); i++) {
      int neighbor = adj[node][i];
      if (!visited[neighbor]) {
        leaf = false;
        visited[neighbor] = true;
        int newCount = (cat[neighbor] ? count + 1 : 0);
        if (newCount <= m) {
          q.push({neighbor, newCount});
        }
      }
    }
    if (leaf) {
      valid++;
    }
  }

  cout << valid << endl;

  return 0;
}
