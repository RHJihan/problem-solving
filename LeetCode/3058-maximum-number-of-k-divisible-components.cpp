class Solution {
public:
    void dfs(int node, int parentNode, vector<vector<int>>& graph,
             vector<int>& parent, stack<int>& order) {
        parent[node] = parentNode;
        order.push(node);

        for (int neighbor : graph[node]) {
            if (neighbor == parentNode) {
                continue;
            }
            dfs(neighbor, node, graph, parent, order);
        }
    }

    int maxKDivisibleComponents(int n, vector<vector<int>>& edges,
                                vector<int>& values, int k) {
        vector<vector<int>> graph(n);
        for (auto& edge : edges) {
            int a = edge[0], b = edge[1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        vector<int> parent(n, -1);
        stack<int> order;

        dfs(0, -1, graph, parent, order);

        vector<long long> sum(n);
        for (int i = 0; i < n; i++) {
            sum[i] = values[i];
        }

        int answer = 0;

        while (!order.empty()) {
            int node = order.top();
            order.pop();

            if (sum[node] % k == 0) {
                answer++;
            } else {
                int p = parent[node];
                if (p != -1) {
                    sum[p] += sum[node];
                }
            }
        }

        return answer;
    }
};
