#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> asteroidCollision(vector<int> &asteroids) {
    stack<int> st;

    for (int ast : asteroids) {
      bool alive = true;

      while (alive && ast < 0 && !st.empty() && st.top() > 0) {
        if (st.top() < -ast) {
          st.pop();
        } else if (st.top() == -ast) {
          st.pop();
          alive = false;
        } else {
          alive = false;
        }
      }

      if (alive) {
        st.push(ast);
      }
    }

    vector<int> result(st.size());
    for (int i = (int)st.size() - 1; i >= 0; i--) {
      result[i] = st.top();
      st.pop();
    }

    return result;
  }
};

int main() {
  Solution sol;
  vector<int> asteroids = {10, 2, -5};
  vector<int> result = sol.asteroidCollision(asteroids);

  for (int i = 0; i < (int)result.size(); i++) {
    cout << result[i];
    if (i != (int)result.size() - 1) {
      cout << ",";
    }
  }
  cout << endl;

  return 0;
}
