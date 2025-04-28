#include <iostream>
using namespace std;

int badVersion;

bool isBadVersion(int version) {
  return version >= badVersion;
}

int firstBadVersion(int n) {
  int left = 1, right = n;

  while (left < right) {
    int mid = left + (right - left) / 2;

    if (isBadVersion(mid)) {
      right = mid;
    } else {
      left = mid + 1;
    }
  }

  return left;
}

int main() {
  int n = 5;

  badVersion = 4;

  int result = firstBadVersion(n);
  cout << "The first bad version is: " << result << endl;

  return 0;
}
