#include <iostream>
using namespace std;

int main() {
  long long a, b;
  cin >> a >> b;
  long long count = 0;
  while (a > 0) {
    count += b / a; 
    long long temp = b % a;
    b = a;
    a = temp;
  }
  cout << count << endl;
  return 0;
}
