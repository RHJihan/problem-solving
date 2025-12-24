class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = (int)temperatures.size();
        vector<int> answer(n, 0);

        for (int i = n - 2; i >= 0; i--) {
            int wait_day = 1;

            while (i + wait_day < n &&
                   temperatures[i] >= temperatures[i + wait_day]) {
                if (answer[i + wait_day] == 0) {
                    break;
                }
                wait_day += answer[i + wait_day];
            }

            if (i + wait_day < n &&
                temperatures[i] < temperatures[i + wait_day]) {
                answer[i] = wait_day;
            }
        }

        return answer;
    }
};