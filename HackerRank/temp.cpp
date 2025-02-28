#include <iostream>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) {
        // If the velocities are equal, they can meet only if they start at the same position.
        return (x1 == x2) ? "YES" : "NO";
    }
    // Check if they meet in finite steps, and if steps (n) are positive.
    if ((x2 - x1) % (v1 - v2) == 0 && (x2 - x1) / (v1 - v2) > 0) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    cout << kangaroo(x1, v1, x2, v2) << endl;
}
