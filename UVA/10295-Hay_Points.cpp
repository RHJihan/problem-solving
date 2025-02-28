// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1236
#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;
  string line;
  map<string, int> points;
  cin.ignore();

  for (int i = 0; i < m; i++) {
    getline(cin, line);

    stringstream ss(line);
    string word;
    int point;
    if (ss >> word >> point) {
      points[word] = point;
    }
  }

  for (int i = 0; i < n; i++) {
    int salary = 0;

    while (getline(cin, line) && line != ".") {
      stringstream ss(line);
      string word;
      while (ss >> word) {
        if (points.find(word) != points.end()) {
          salary += points[word];
        }
      }
    }
    cout << salary << endl;
  }

  return 0;
}