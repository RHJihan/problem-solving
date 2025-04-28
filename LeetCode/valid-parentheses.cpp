#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
  stack<char> st;

  for (int i = 0; i < (int)s.size(); i++) {
    char c = s[i];

    if (c == '(' || c == '{' || c == '[') {
      st.push(c);
    }

    else {

      if (st.empty()) {
        return false;
      }

      char top = st.top();
      if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
        return false;
      }

      st.pop();
    }
  }

  return st.empty();
}

int main() {
  string s = "()[]{}";
  //   cin >> s;

  if (isValid(s)) {
    cout << "valid." << endl;
  } else {
    cout << "invalid." << endl;
  }

  return 0;
}
