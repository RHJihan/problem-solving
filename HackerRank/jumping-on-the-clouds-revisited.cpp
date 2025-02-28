// https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, jump, energy = 100;
  cin >> n >> jump;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int position = 0;
  
  do {
    position = (position + jump) % n; 
    energy--;                        
    if (arr[position] == 1) {
      energy -= 2; 
    }
  } while (position != 0); 

  cout << energy << '\n';

  return 0;
}