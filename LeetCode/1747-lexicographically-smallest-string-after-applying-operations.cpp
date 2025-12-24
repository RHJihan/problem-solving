class Solution {
public:
    string findLexSmallestString(string s, int a, int b) {
        queue<string> toVisit;
        set<string> visited;
        string smallest = s;
        int n = (int)s.size();

        toVisit.push(s);
        visited.insert(s);

        while (!toVisit.empty()) {
            string current = toVisit.front();
            toVisit.pop();

            if (current < smallest) {
                smallest = current;
            }

            string added = current;
            for (int i = 1; i < n; i += 2) {
                int newDigit = (added[i] - '0' + a) % 10;
                added[i] = '0' + newDigit;
            }

            if (visited.find(added) == visited.end()) {
                visited.insert(added);
                toVisit.push(added);
            }

            string rotated = current.substr(n - b) + current.substr(0, n - b);
            if (visited.find(rotated) == visited.end()) {
                visited.insert(rotated);
                toVisit.push(rotated);
            }
        }

        return smallest;
    }
};
