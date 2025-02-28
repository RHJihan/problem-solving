#include <iostream>
using namespace std;

int main()
{
    int n = 100;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int i = 0; i < n; i++)
                {
                    sum += i;
                }
            }
        }
    }
    cout << sum;

    return 0;
}