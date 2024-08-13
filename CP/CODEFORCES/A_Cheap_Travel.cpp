#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    int sum = 0;

    while (n > 0)
    {
        if (b < a * m && n >= m)
        {
            sum += b;
            n -= m;
        }
        else if (n < m && b < a * n)
        {
            sum += b;
            n = 0;
        }
        
        else
        {
            sum += a;
            n --;
        }
    }

    cout << sum;
    return 0;
}