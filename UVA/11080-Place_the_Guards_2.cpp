#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adjacency_list;
vector<int> color;
bool is_bipartite;
int color_count[2];

void dfs(int node, int c) {
  color[node] = c;
  color_count[c]++;
  for (int i = 0; i < (int)adjacency_list[node].size(); i++) {
    int neighbor = adjacency_list[node][i];
    if (color[neighbor] == -1) {
      dfs(neighbor, 1 - c);
    } else if (color[neighbor] == color[node]) {
      is_bipartite = false;
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("/home/jihan/Documents/problem-solving/input.txt", "r", stdin);
  // (void)!freopen("/home/jihan/Documents/problem-solving/output.txt","w", stdout);
#endif

  int test;
  cin >> test;
  while (test--) {
    int v, e;
    cin >> v >> e;
    adjacency_list.assign(v, vector<int>());

    for (int i = 0; i < e; i++) {
      int f, t;
      cin >> f >> t;
      adjacency_list[f].push_back(t);
      adjacency_list[t].push_back(f);
    }

    color.assign(v, -1);
    int min_guards = 0;

    for (int i = 0; i < v; i++) {
      if (color[i] == -1) {
        color_count[0] = color_count[1] = 0;
        is_bipartite = true;
        dfs(i, 0);

        min_guards += max(1, min(color_count[0], color_count[1]));

        if (!is_bipartite) {
          min_guards = -1;
          continue;
        }
      }
    }
    cout << min_guards << endl;
  }

  return 0;
}
