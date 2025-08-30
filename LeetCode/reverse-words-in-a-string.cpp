#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Solution {
public:
  string reverseWords(string s) {
    vector<string> words;
    string word;
    stringstream ss(s);

    while (ss >> word) {
      words.push_back(word);
    }

    string result = "";
    for (int i = (int)words.size() - 1; i >= 0; i--) {
      result += words[i];
      if (i != 0)
        result += " ";
    }

    return result;
  }
};

int main() {
  Solution sol;
  cout << sol.reverseWords("the sky is blue") << endl;

  return 0;
}