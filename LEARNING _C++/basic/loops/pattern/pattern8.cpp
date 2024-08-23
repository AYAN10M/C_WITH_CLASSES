/*
    *********
     *******
      *****
       ***
        *
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of row:\t";
    cin >> row;

    for (int i = row; i > 0 ; i--)
    {
        // for printing " "
        for (int k = 1 ; k <= row - i; k++)
        {
            cout << " ";
        }
        
        // for printing "*"
        for (int j = 1; j <= 2*i - 1; j++)
        {
            cout << "*";
        }
        
        
        cout << endl;
    }

    return 0;
}