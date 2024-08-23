#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, revNum = 0, checkPalindrome;
    cin >> num;

    checkPalindrome = num;

    while (num > 0)
    {
        revNum = revNum * 10 + num % 10;
        num = num / 10;
    }

    if (checkPalindrome == revNum)
    {
        cout << "The given number " << checkPalindrome << " is Palindrome";
    }
    else
    {
        cout << "The given number " << checkPalindrome << " is not Palindrome";
    }
    

    return 0;
}
