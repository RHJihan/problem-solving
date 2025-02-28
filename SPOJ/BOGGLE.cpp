// https://www.spoj.com/problems/BOGGLE/en/
#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

int weight(string word) {
  if (word.size() <= 4)
    return 1;

  if (word.size() == 5)
    return 2;

  if (word.size() == 6)
    return 3;

  if (word.size() == 7)
    return 5;

  return 11;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
// freopen("output.txt","w",stdout);
#endif

  int n;
  cin >> n;
  cin.ignore();

  map<int, vector<string>> pli;
  map<string, int> freq;
  for (int i = 0; i < n; i++) {
    string line;
    getline(cin, line);
    stringstream ss(line);
    string word;
    while (ss >> word) {
      freq[word]++;
      pli[i].push_back(word);
    }
  }
  vector<int> points(n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < (int)pli[i].size(); j++) {
      string cur_word = pli[i][j];
      if (freq[cur_word] == 1) {
        points[i] += weight(cur_word);
      }
    }
  }

  int max_point = -1;

  for (int i = 0; i < n; i++) {
    if (points[i] > max_point) {
      max_point = points[i];
    }
  }

  cout << max_point << '\n';

  return 0;
}