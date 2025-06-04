#include <iostream>
using namespace std;

int overlap_len(string t, int n) {
    for (int len = n - 1; len > 0; len--) {
        bool match = true;
        for (int i = 0; i < len; i++) {
            if (t[i] != t[n - len + i]) {
                match = false;
                break;
            }
        }
        if (match) {
            return len;
        }
    }
    return 0;
}

int main() {
    int n, k;
    cin >> n >> k;

    string t;
    cin >> t;

    int overlap = overlap_len(t, n);

    for (int i = 0; i < n; i++) {
        cout << t[i];
    }

    for (int i = 1; i < k; i++) {
        for (int j = overlap; j < n; j++) {
            cout << t[j];
        }
    }

    cout << endl;
    return 0;
}
