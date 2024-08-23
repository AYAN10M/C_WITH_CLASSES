/*
    12345
    1234
    123
    12
    1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter the no of row:\t";
    cin >> row;

    for (int i = row; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << "\t";
        }
        cout << endl;
    }
    return 0;
}