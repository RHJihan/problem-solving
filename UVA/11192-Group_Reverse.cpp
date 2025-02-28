// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2133
#include <iostream>
using namespace std;

void reverse_group(string &str, int start, int end) {
  while (start < end) {
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  // freopen("output.txt","w",stdout);
#endif

  while (true) {
    int g;
    cin >> g;
    if (g == 0) {
      break;
    }

    string s;
    cin >> s;

    int group_size = s.length() / g;

    for (int i = 0; i < s.length(); i += group_size) {
      reverse_group(s, i, i + group_size - 1);
    }

    cout << s << endl;
  }
  return 0;
}