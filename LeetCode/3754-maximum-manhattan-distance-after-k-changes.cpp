class Solution {
public:
    int maxDistance(string s, int k) {
        int dist = 0;
        int N = 0, S = 0, E = 0, W = 0;
        int n = (int)s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == 'N')
                N++;
            else if (s[i] == 'S')
                S++;
            else if (s[i] == 'E')
                E++;
            else if (s[i] == 'W')
                W++;

            int manhattan = abs(N - S) + abs(E - W);

            int cancel_steps = min(N, S) + min(E, W);

            int flips = min(k, cancel_steps);

            int current = manhattan + 2 * flips;

            dist = max(dist, current);
        }

        return dist;
    }
};