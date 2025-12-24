class Solution {
public:
    int countCollisions(string directions) {
        stack<char> st;
        int collisions = 0;
        for (int i = 0; i < directions.size(); i++) {
            char d = directions[i];
            if (!st.empty() && st.top() == 'R' && (d == 'L' || d == 'S')) {
                while (!st.empty() && st.top() == 'R') {
                    collisions++;
                    st.pop();
                }
                if (d == 'L')
                    collisions++;
                st.push('S');
                continue;
            }

            if (!st.empty() && st.top() == 'S' && d == 'L') {
                collisions++;
                continue;
            }

            st.push(d);
        }
        return collisions;
    }
};