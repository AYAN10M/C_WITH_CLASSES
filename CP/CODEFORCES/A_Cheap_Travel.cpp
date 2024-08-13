#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        n: the number of rides Ann has planned
        m: the number of rides covered by the m ride ticket
        a: the price of a one ride ticket
        b: the price of an m ride ticket.
    */
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int sum = 0;

    while (n--)
    {
        if (b > a * m && m <= n)
        {
            sum += b;
        }
        else
        {
            sum += a;
        }
    }

    cout << sum;
    return 0;
}