#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter the no of row:\t";
    cin >> row;

    int half = row / 2;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}