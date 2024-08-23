// Check whether your are eligible to cast vote or not

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    cout << "Enter your name:\t";
    getline(cin, name);

    int age;
    cout << "Enter your age:\t";
    cin >> age;

    if (age < 18)
    {
        cout << name << " you are not eligible to cast vote" << endl;
    }
    else
    {
        cout << name <<" you are eligible to cast vote" << endl;
    }
    
    
}