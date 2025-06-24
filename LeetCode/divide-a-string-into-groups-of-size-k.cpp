#include <iostream>
#include <vector>
using namespace std;

vector<string> divideString(string s, int k, char fill) {
  vector<string> result;
  for (int i = 0; i < (int)s.size(); i += k) {
    string current = s.substr(i, k);

    if ((int)current.size() != k) {
      current.append(k - (int)current.size(), fill);
    }
    result.push_back(current);
  }

  return result;
}

int main() {
  string s = "abcdefghij";
  int k = 3;
  char fill = 'x';

  vector<string> result = divideString(s, k, fill);

  for (string re : result) {
    cout << re << endl;
  }

  return 0;
}