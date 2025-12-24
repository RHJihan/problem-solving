class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;

        for (int i = 0; i < (int)operations.size(); i++) {
            string op = operations[i];

            if (op == "C") {
                record.pop_back();
            } else if (op == "D") {
                int last_score = record.back();
                record.push_back(2 * last_score);
            } else if (op == "+") {
                int n = (int)record.size();
                int new_score = record[n - 1] + record[n - 2];
                record.push_back(new_score);
            } else {
                int score = stoi(op);
                record.push_back(score);
            }
        }

        int total = 0;
        for (int i = 0; i < (int)record.size(); i++) {
            total += record[i];
        }

        return total;
    }
};