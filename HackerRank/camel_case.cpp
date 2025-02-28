// https://www.hackerrank.com/challenges/camelcase/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int count = 1;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            count = count + 1;
    }
    cout << count << endl;
    return 0;
}
