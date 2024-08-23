#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, i;
    cout << "Enter the no of row:\t";
    cin >> row;

    for (i = 1; i <= row/2; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int k = i; k > 0; k--)
    {
        for (int l = 0; l < k; l++)
        {
            cout << "*";
        }
        i-- ; 
        cout << endl;
    }

    return 0;
}