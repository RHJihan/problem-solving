// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1223
#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main() {
  map<string, string> dictionary;
  string line;

  while (true) {
    getline(cin, line);
    if (line.empty()) {
      break;
    }

    stringstream ss(line);
    string english, defintion;

    if (ss >> english >> defintion) {
      dictionary[defintion] = english;
    }
  }

  while (getline(cin, line)) {
    if (line.empty()) {
      break;
    }
    if (dictionary.find(line) != dictionary.end()) {
      cout << dictionary[line] << '\n';
    } else {
      cout << "eh" << '\n';
    }
  }
  return 0;
}