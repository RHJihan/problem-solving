#include <iostream>
#include <string>
#include <map>
using namespace std;

string substring(string str, int index) {
  string result = "";
  if (index >= 0 && index + 1 < (int) str.size()) {
    result += str[index];
    result += str[index + 1];
  }
  return result;
}

int main() {
  int n;
  string s;
  cin >> n >> s;

  map < string, int > freq;

  for (int i = 0; i < n - 1; i++) {
    string two_gram = substring(s, i);
    freq[two_gram]++;
  }

  string max_freq;
  int count = 0;

  for (auto it = freq.begin(); it != freq.end(); it++) {
    if (it -> second > count) {
      count = it -> second;
      max_freq = it -> first;
    }
  }

  cout << max_freq << endl;

  return 0;
}

