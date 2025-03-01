// https://codeforces.com/contest/2009/problem/C

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y, k;
        cin >> x >> y >> k; 

        int moves_x = (x + k - 1) / k;  
        int moves_y = (y + k - 1) / k;  

        int ans = 2 * max(moves_x, moves_y);

        if (moves_x > moves_y) {
            ans--;  
        }

        cout << ans << '\n';
        cout << moves_x << '\n';
        cout << moves_y << '\n';
    }
    return 0; 
}

