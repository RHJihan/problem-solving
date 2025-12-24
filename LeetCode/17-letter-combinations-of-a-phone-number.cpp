class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};
        }
        vector<string> keys = {"",    "",    "abc",  "def", "ghi",
                               "jkl", "mno", "pqrs", "tuv", "wxyz"};

        vector<string> result = {""};
        for (int i = 0; i < (int)digits.size(); i++) {
            vector<string> temp;
            string letters = keys[digits[i] - '0'];
            for (int j = 0; j < (int)result.size(); j++) {
                string combination = result[j];
                for (int k = 0; k < (int)letters.size(); k++) {
                    char letter = letters[k];
                    temp.push_back(combination + letter);
                }
            }

            result = temp;
        }

        return result;
    }
};