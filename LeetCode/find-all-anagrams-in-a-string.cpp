#include <iostream>
#include <vector>
using namespace std;

vector<int> findAnagrams(string s, string p) {
  vector<int> result;
  if ((int)s.size() < (int)p.size()) {
    return result;
  }

  vector<int> p_count(26, 0);
  vector<int> s_count(26, 0);

  for (int i = 0; i < (int)p.size(); i++) {

    p_count[p[i] - 'a']++;
  }

  int window = (int)p.size();

  for (int i = 0; i < window; i++) {
    s_count[s[i] - 'a']++;
  }

  if (s_count == p_count) {
    result.push_back(0);
  }

  for (int i = window; i < (int)s.size(); i++) {
    s_count[s[i] - 'a']++;
    s_count[s[i - window] - 'a']--;

    if (s_count == p_count) {
      result.push_back(i - window + 1);
    }
  }

  return result;
}

int main() {
  string s = "cbaebabacd";
  string p = "abc";
  vector<int> indices = findAnagrams(s, p);

  for (int index : indices) {
    cout << index << " ";
  }
  cout << endl;
  return 0;
}
