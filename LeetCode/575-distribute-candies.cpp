class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> unique;

        for (int i = 0; i < (int)candyType.size(); i++) {
            unique.insert(candyType[i]);
        }

        int max_eat = (int)candyType.size() / 2;

        if ((int)unique.size() < max_eat) {
            return unique.size();
        }
        return max_eat;
    }
};