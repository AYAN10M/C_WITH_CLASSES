#include <bits/stdc++.h>
using namespace std;

int countNumber(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number:\t";
    cin >> n;
    cout << countNumber(n);
    return 0;
}