// https://www.hackerrank.com/challenges/two-characters/problem

#include <bits/stdc++.h>
using namespace std;

bool isAlternating(string s)
{
    bool flag = true;
    for (int i = 1; i < (int)s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int alternatingSize(string s, char one, char two)
{
    string result;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == one || s[i] == two)
        {
            result.push_back(s[i]);
        }
    }
    if (!isAlternating(result))
    {
        return 0;
    }
    return (int)result.size();
}

int alternate(string s)
{
    string t;
    int max_size = 0;

    for (int i = 0; i < (int)s.size(); i++)
    {
        char c = s[i];
        if (t.find(c) == string::npos)
            t.push_back(c);
    }
    sort(t.begin(), t.end());

    for (int i = 0; i < (int)t.size(); ++i)
    {
        for (int j = i + 1; j < (int)t.size(); ++j)
        {
            int size = alternatingSize(s, t[i], t[j]);
            max_size = max(max_size, size);
        }
        
    }


    return max_size;
}

int main()
{
    int l;
    string s;
    cin >> s;

    cout << alternate(s);


    return 0;
}