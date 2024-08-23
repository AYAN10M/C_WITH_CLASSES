/*
        *
       ***
      *****
     *******
    *********
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
        // loop for spacing
        for (int k = row - i; k > 0 ; k--)
        {
            cout << " ";
        }
        
        // loop for printing "*"
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        
        
        cout << endl;
           
    }
    

    return 0;
}