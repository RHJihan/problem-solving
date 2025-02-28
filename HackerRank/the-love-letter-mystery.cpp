// https://www.hackerrank.com/challenges/the-love-letter-mystery/problem

#include <iostream>
using namespace std;

int main() {
  int q; 
  cin >> q;

  while (q--) {
    string s;
    cin >> s; 

    int left = 0;
    int right = (int)s.size() - 1;
    int count = 0;

    while (left < right) {
      count += abs(s[left] - s[right]);
      left++;
      right--;
    }

    cout << count << endl;
  }

  return 0;
}