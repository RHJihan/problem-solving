#include <iostream>
#include <vector>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
  (void)!freopen("input.txt", "r", stdin);
  // (void)!freopen("output.txt","w", stdout);
#endif

  int t;
  cin >> t;

  while (t--) {
    long long n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    long long total_cards = 0;
    long long max_cards = 0;

    for (long long i = 0; i < n; ++i) {
      total_cards += a[i];
      max_cards = max(max_cards, a[i]);
    }

    long long max_deck_size = 1;

    for (long long i = 2; i <= n; i++) {
      long long remainder = total_cards % i;
      long long need_fill = (i - remainder) % i;

      if (need_fill <= k) {
        long long possible = (total_cards + need_fill) / i;

        if (possible >= max_cards) {
          max_deck_size = i;
        } else {
          long long total_needed = max_cards * i - total_cards;
          if (total_needed <= k) {
            max_deck_size = i;
          }
        }
      }
    }

    cout << max_deck_size << endl;
  }

  return 0;
}
