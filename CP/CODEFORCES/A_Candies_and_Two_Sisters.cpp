#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, count = 0;
        cin >> n;

        if (n == 1 || n == 2)
        {
            cout << 0 << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << (n / 2) - 1 << endl;
            }
            else
            {
                cout << (n - 1) / 2 << endl;
            }
        }
    }

    return 0;
}