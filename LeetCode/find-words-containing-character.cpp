#include <iostream>
#include <vector>
using namespace std;

vector<int> findWordsContaining(vector<string> &words, char x) {
  vector<int> result;

  for (int i = 0; i < (int)words.size(); i++) {
    string word = words[i];

    for (int j = 0; j < (int)word.size(); j++) {
      if (word[j] == x) {
        result.push_back(i);
        break;
      }
    }
  }

  return result;
}

int main() {
  vector<string> words = {"leet", "code"};
  vector<int> result = findWordsContaining(words, 'e');

  for (int i = 0; i < (int)result.size(); i++) {
    cout << result[i] << " ";
  }

  return 0;
}