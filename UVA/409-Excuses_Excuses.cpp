// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=350
#include <iostream>
#include <set>
#include <vector>
using namespace std;

string lower_case(string s) {
  for (int i = 0; i < s.size(); i++) {
    s[i] = tolower(s[i]);
  }
  return s;
}
int countKeywords(string &excuse, set<string> &keywords) {
  string lowered = lower_case(excuse);
  int count = 0;
  string word;

  for (int i = 0; i < lowered.size(); i++) {
    if (isalpha(lowered[i])) {
      word += lowered[i];
    } else if (!word.empty()) {
      if (keywords.find(word) != keywords.end()) {
        count++;
      }
      word = "";
    }
  }
  return count;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  int case_count = 0;
  int k, e;
  while (cin >> k >> e) {
    case_count++;
    cin.ignore();

    set<string> keywords;
    vector<string> excuses(e);
    vector<int> keyword_count(e);

    for (int i = 0; i < k; i++) {
      string s;
      getline(cin, s);
      keywords.insert(lower_case(s));
    }

    int max_count = 0;
    for (int i = 0; i < e; i++) {
      getline(cin, excuses[i]);
      keyword_count[i] = countKeywords(excuses[i], keywords);
      max_count = max(max_count, keyword_count[i]);
    }

    cout << "Excuse Set #" << case_count << endl;
    for (int i = 0; i < e; i++) {
      if (keyword_count[i] == max_count) {
        cout << excuses[i] << endl;
      }
    }
    cout << endl;
  }
  return 0;
}
