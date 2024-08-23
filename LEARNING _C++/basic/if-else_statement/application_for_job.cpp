#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter the applicant age:\t";
    cin >> age;

    if (age < 18)
    {
        cout << "Your are not eligible to get the job" << endl;
    }
    else if (age >= 18 && age < 45)
    {
        cout << "You are eligibel to get the job" << endl;
    }
    else if (age <= 45 && age < 60)
    {
        cout << "You are eligibel to get the job but will get retire soon" << endl;
    }
    else
    {
        cout << "Time to spend time with your family" << endl;
    }
    return 0;
}