#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;

    cin >> s;
    bool flag = true;

    while (flag == true)
    {
        flag = false;
        // cout << "before for: " << (int)s.size()-1 << endl;
        for (int i = 0; i < (int)s.size() - 1; i++)
        
        {
            if (s[i] == s[i + 1])
            {
                // cout << i << "; " << s[i] << endl;
                s.erase(s.begin() + i);
                s.erase(s.begin() + i);
                flag = true;
                break;
            }
        }
        // cout << "#####" << endl;
        // cout << s << " " << s.size() << endl;
    }

    if (s.size() == 0)
        cout << "Empty String" << endl;
    else
        cout << s << endl;
    return 0;
}