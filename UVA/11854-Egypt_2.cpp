// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2954
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r) {
  int leftL = m - l + 1;
  int rightL = r - m;

  int tmpL[leftL];
  int tmpR[rightL];

  for (int i = 0; i < leftL; i++) {
    tmpL[i] = arr[l + i];
  }

  for (int i = 0; i < rightL; i++) {
    tmpR[i] = arr[m + 1 + i];
  }

  int i, j, k;

  for (i = 0, j = 0, k = l; k <= r; k++) {
    if ((i < leftL) && (j >= rightL || tmpL[i] <= tmpR[j])) {
      arr[k] = tmpL[i];
      i++;
    } else {
      arr[k] = tmpR[j];
      j++;
    }
  }
}

void merge_sort(vector<int> &arr, int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    merge_sort(arr, l, m);
    merge_sort(arr, m + 1, r);

    merge(arr, l, m, r);
  }
}

int main() {
  int a, b, c;

  while (true) {
    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0) {
      break;
    }

    vector<int> sides = {a, b, c};
    merge_sort(sides, 0, 2);

    if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]) {
      cout << "right" << endl;
    } else {
      cout << "wrong" << endl;
    }
  }

  return 0;
}