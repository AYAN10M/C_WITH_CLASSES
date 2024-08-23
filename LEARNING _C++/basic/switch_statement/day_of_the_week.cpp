#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cout << "Enter the day number:\t";
    cin >> day;

    switch (day)
    {
    case 7:
        cout << "Today is Sunday ! Chill Na" << endl;
        break;
    case 6:
        cout << "Today is Saturday ! Let's have party" << endl;
            break;
    case 5:
        cout << "Today is Friday" << endl;
        break;
    case 4:
        cout << "Today is Thursday" << endl;
        break;
    case 3:
        cout << "Today is Wednesday" << endl;
        break;
    case 2:
        cout << "Today is TUesday" << endl;
        break;
    case 1:
        cout << "Today is Monday ! I will be busy at office" << endl;
        break;
    default:
        cout << "Please enter a valid option";
        break;
    }
}