#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n)
{
    int sum = 0, num = n;
    int len = int(log10(n) + 1);
    while (num > 0)
    {
        sum = sum + pow((num % 10), len);
        num /= 10;
    }

    if (n == sum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout << "Enter the number:\t";
    cin >> n;

    int result = checkArmstrong(n);

    if (result == 1)
    {
        cout << "The given number is an Armstrong Number.";
    }
    else
    {
        cout << "The given number is not an Armstrong Number.";
    }

    return 0;
}
