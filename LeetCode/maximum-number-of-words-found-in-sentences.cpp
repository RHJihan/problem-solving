#include <iostream>
#include <vector>
using namespace std;

int mostWordsFound(vector<string> &sentences) {
  int max_words = 0;

  for (int i = 0; i < (int)sentences.size(); i++) {
    string sentence = sentences[i];
    int count = 1;

    for (int j = 0; j < (int)sentence.size(); j++) {
      if (sentence[j] == ' ') {
        count++;
      }
    }

    if (count > max_words) {
      max_words = count;
    }
  }

  return max_words;
}

int main() {
  vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
  cout << mostWordsFound(sentences) << endl;
  return 0;
}