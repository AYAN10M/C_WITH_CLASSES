/*
 *****
 *****
 *****
 *****
 *****
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row:\t";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}