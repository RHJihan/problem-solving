#include <iostream>
#include <vector>
using namespace std;

double calc_area(vector<int> &A, vector<int> &B, vector<int> &C) {
  return 0.5 * abs(A[0] * (B[1] - C[1]) + B[0] * (C[1] - A[1]) + C[0] * (A[1] - B[1]));
}
double largestTriangleArea(vector<vector<int>> &points) {
  double max_area = 0.0;
  int n = (int)points.size();

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        double area = calc_area(points[i], points[j], points[k]);
        if (area > max_area) {
          max_area = area;
        }
      }
    }
  }

  return max_area;
}

int main() {
  vector<vector<int>> points = {{0, 0}, {0, 1}, {1, 0}, {0, 2}, {2, 0}};

  cout << largestTriangleArea(points) << endl;

  return 0;
}