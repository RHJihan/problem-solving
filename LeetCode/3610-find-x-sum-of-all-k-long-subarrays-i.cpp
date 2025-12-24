class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> answer;
        int n = nums.size();

        for (int start = 0; start <= n - k; start++) {
            vector<int> subarray;
            for (int j = start; j < start + k; j++) {
                subarray.push_back(nums[j]);
            }

            map<int, int> freq;
            for (int num : subarray) {
                freq[num]++;
            }

            vector<pair<int, int>> freqList;
            for (auto p : freq) {
                freqList.push_back({p.first, p.second}); 
            }


            sort(freqList.begin(), freqList.end(),
                 [](pair<int, int> a, pair<int, int> b) {
                     if (a.second == b.second)
                         return a.first > b.first; 
                     return a.second > b.second;   
                 });

            int count = 0;
            int sum = 0;
            for (int i = 0; i < freqList.size(); i++) {
                if (count == x)
                    break;
                int num = freqList[i].first;
                int frequency = freqList[i].second;
                sum += num * frequency;
                count++;
            }

            answer.push_back(sum);
        }

        return answer;
    }
};
