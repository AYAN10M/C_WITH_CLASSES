/*
    1
    22
    333
    4444
    55555
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row:\t";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << "\t";
        }
        cout << endl;
    }

    return 0;
}