class Solution {
public:
    vector<int> minOperations(string boxes) {

        int n = (int)boxes.size();

        vector<int> pos;
        for (int i = 0; i < n; i++) {
            if (boxes[i] == '1') {
                pos.push_back(i);
            }
        }
        vector<int> result;
        for (int i = 0; i < n; i++) {
            int x = 0;
            for (int j = 0; j < pos.size(); j++) {
                x += abs(i - pos[j]);
            }
            result.push_back(x);
        }

        return result;
    }
};