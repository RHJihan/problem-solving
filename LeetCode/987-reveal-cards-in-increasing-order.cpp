class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());

        vector<int> result(deck.size());
        vector<int> indices;

        for (int i = 0; i < deck.size(); i++) {
            indices.push_back(i);
        }

        int i = 0;
        while (!indices.empty()) {
            result[indices[0]] = deck[i];
            i++;
            indices.erase(indices.begin());

            if (!indices.empty()) {
                indices.push_back(indices[0]);
                indices.erase(indices.begin());
            }
        }

        return result;
    }
};