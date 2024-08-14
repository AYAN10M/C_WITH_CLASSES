#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<bool> occupied(n + 2, false);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool valid = true;
        for (int i = 0; i < n; i++)
        {
            int seat = a[i];
            if (i == 0)
            {
                occupied[seat] = true;
            }
            else
            {
                if (occupied[seat - 1] || occupied[seat + 1])
                {
                    occupied[seat] = true;
                }
                else
                {
                    valid = false;
                    break;
                }
            }
        }

        if (valid)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}