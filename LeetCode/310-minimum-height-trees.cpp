class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n == 1) {
            return {0};
        }

        vector<vector<int>> adj(n);
        vector<int> degree(n, 0);

        for (int i = 0; i < (int)edges.size(); ++i) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
            degree[u]++;
            degree[v]++;
        }

        queue<int> q;
        for (int i = 0; i < n; ++i) {
            if (degree[i] == 1) {
                q.push(i);
            }
        }

        vector<int> result;
        while (!q.empty()) {
            int size = (int)q.size();
            result.clear();

            for (int i = 0; i < size; ++i) {
                int node = q.front();
                q.pop();
                result.push_back(node);

                for (int j = 0; j < (int)adj[node].size(); j++) {
                    int neighbor = adj[node][j];
                    degree[neighbor]--;
                    if (degree[neighbor] == 1) {
                        q.push(neighbor);
                    }
                }
            }
        }

        return result;
    }
};