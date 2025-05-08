#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height) {
  int left = 0;
  int right = (int) height.size() - 1;
  int max_water = 0;

  while (left < right) {
    int h = min(height[left], height[right]);
    int w = right - left;
    int area = h * w;

    if (area > max_water) {
      max_water = area;
    }

    if (height[left] < height[right]) {
      left++;
    } else {
      right--;
    }
  }

  return max_water;
}

int main() {
  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  cout << maxArea(height) << endl;
  return 0;
}
