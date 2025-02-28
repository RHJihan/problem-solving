// https://www.hackerrank.com/challenges/find-the-median/problem

#include <iostream>
using namespace std;

void merge_sorted_arrays(int a[], int l, int m, int r) {
  int left_length = m - l + 1;
  int right_length = r - m;

  int temp_left[left_length];
  int temp_right[right_length];

  int i, j, k;

  for (int i = 0; i < left_length; i++) {
    temp_left[i] = a[l + i];
  }

  for (int i = 0; i < right_length; i++) {
    temp_right[i] = a[m + 1 + i];
  }

  for (i = 0, j = 0, k = l; k <= r; k++) {
    if ((i < left_length) &&
        (j >= right_length || temp_left[i] <= temp_right[j])) {
      a[k] = temp_left[i];
      i++;
    }
    else {
      a[k] = temp_right[j];
      j++;
    }
  }
}

void recursive_merge_sort(int a[], int l, int r) {
  if (l < r) {

    int m = l + (r - l) / 2;
    recursive_merge_sort(a, l, m);
    recursive_merge_sort(a, m + 1, r);

    merge_sorted_arrays(a, l, m, r);
  }
}

int main() {
  int n;
  cin >> n;
  int array[n];

  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }

  recursive_merge_sort(array, 0, n - 1);

  cout << array[n / 2] << '\n';

  return 0;
}
