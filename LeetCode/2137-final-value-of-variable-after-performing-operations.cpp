class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X = 0;

        for (int i = 0; i < (int)operations.size(); i++) {
            string op = operations[i];

            if (op == "++X" || op == "X++") {
                X = X + 1;
            } else if (op == "--X" || op == "X--") {
                X = X - 1;
            }
        }

        return X;
    }
};