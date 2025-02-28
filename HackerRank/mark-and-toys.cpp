// https://www.hackerrank.com/challenges/mark-and-toys/problem

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

int maximumToys(int price[], int n, int k) {
  recursive_merge_sort(price, 0, n - 1);

  int totalCost = 0;
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (totalCost + price[i] <= k) {
      totalCost += price[i];
      count++;
    } else {
      break;
    }
  }

  return count;
}

int main() {
  int n, k;
  cin >> n >> k;
  int price[n];
  for (int i = 0; i < n; i++) {
    cin >> price[i];
  }

  cout << maximumToys(price, n, k) << '\n';

  return 0;
}