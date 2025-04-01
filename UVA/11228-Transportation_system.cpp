#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

struct Edge {
  int u, v;
  double weight;
};

struct City {
  int x, y;
};

int find_set(vector<int> &parent, int u) {
  if (parent[u] == u)
    return u;
  return parent[u] = find_set(parent, parent[u]);
}

void union_set(vector<int> &parent, vector<int> &rank, int u, int v) {
  int root_u = find_set(parent, u);
  int root_v = find_set(parent, v);

  if (root_u != root_v) {
    if (rank[root_u] > rank[root_v]) {
      parent[root_v] = root_u;
    } else if (rank[root_u] < rank[root_v]) {
      parent[root_u] = root_v;
    } else {
      parent[root_v] = root_u;
      rank[root_u]++;
    }
  }
}

double calculate_distance(City a, City b) {
  return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
//   (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  for (int case_num = 1; case_num <= t; case_num++) {
    int n, r;
    cin >> n >> r;

    vector<City> cities(n);
    vector<Edge> edges;
    vector<int> parent(n), rank(n, 0);

    for (int i = 0; i < n; i++) {
      cin >> cities[i].x >> cities[i].y;
      parent[i] = i;
    }

    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        double d = calculate_distance(cities[i], cities[j]);
        edges.push_back({i, j, d});
      }
    }

    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
      return a.weight < b.weight;
    });

    double road_length = 0, rail_length = 0;
    int states = n;

    for (int i = 0; i < (int)edges.size(); i++) {
      int u = edges[i].u, v = edges[i].v;
      double weight = edges[i].weight;

      if (find_set(parent, u) != find_set(parent, v)) {
        union_set(parent, rank, u, v);

        if (weight <= r) {
          road_length += weight;
          states--;
        } else {
          rail_length += weight;
        }
      }
    }

    cout << "Case #" << case_num << ": " << states << " " << round(road_length) << " " << round(rail_length) << endl;
  }

  return 0;
}
