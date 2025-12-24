class Solution {
public:
    bool dfs(int course, vector<vector<int>>& prereq, vector<int>& visited, vector<int>& result) {
        if (visited[course] == 1) {
            return false;
        }
        if (visited[course] == 2) {
            return true;
        }

        visited[course] = 1;

        for (int pre : prereq[course]) {
            if (!dfs(pre, prereq, visited, result)) {
                return false;
            }
        }

        visited[course] = 2;
        result.push_back(course);

        return true;
    }

    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

        vector<vector<int>> prereq(numCourses);
        for (auto p : prerequisites) {
            prereq[p[0]].push_back(p[1]);
        }

        vector<int> result;
        vector<int> visited(numCourses, 0);

        for (int i = 0; i < numCourses; i++) {
            if (!dfs(i, prereq, visited, result)) {
                return {};
            }
        }

        return result;
    }
};