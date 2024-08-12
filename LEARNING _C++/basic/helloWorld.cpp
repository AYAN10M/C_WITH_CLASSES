#include <iostream>

/*
    When you use using namespace std, you are telling the compiler to treat all the names in the std namespace as if they are in the global namespace. This means that you can use names like cin, cout, and vector without specifying std:: before them. This syntax avoids the need to use the scope resolution operator with every standard library component
*/
using namespace std;

// To use string in c++
#include <string.h>

/*
    In C++, #include <bits/stdc++.h> is a precompiled header's implementation file that includes all standard libraries required in code. It can be useful in competitive programming contests, where time is a factor, because it can save time by avoiding the need to include multiple standard headers individually.
*/
#include <bits/stdc++.h>

int main()
{
    // "std::endl" is similar to "\n"
    // printing statement in c++
    std::cout << "Hello World!" << std::endl;
    cout << "A New Journey to learn C++" << endl;

    // taking input in c++
    int age;
    cout << "Enter your age:\t";
    cin >> age;

    if (age < 18)
    {
        cout << "Your are not eligible to vote" << endl;
    }
    else
    {
        cout << "Yor are eligible to vote" << endl;
    }

    // // taking multiple input in c++
    float height, weight;
    cout << "Enter your height and weight:\t";
    cin >> height >> weight;

    float bmi = weight / (height * height);
    cout << "Your BMI:\t" << bmi << endl;

    /*
            Type        Minimum Size (bits)         Typical Range

            int         16-32                       768 to 32,767
            long        32-2,147                    483,648 to 2,147,483,647
            long long   64                          -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    */

    // String in c++
    // This will only pickup the characters before the space
    string name;
    cout << "Enter your name:\t";
    cin >> name;
    cout << "\n Hello" << name << "it's nice to meet you";

    // To pickup the letters after the space we need two string
    string first_name, last_name;
    cout << "\nEnter your name:\t";
    cin >> first_name >> last_name;
    cout << "\n Hello" << first_name << "it's nice to meet you" << "We will hope that we will have nice conservation further Mr" << last_name << endl;

    // or else we can use the following way to get a sentences instead of using multiple string variable to store each words. This will take characters till the line end
    string aboutYou;
    cout << "Tell me something about you:\t";
    getline(cin, aboutYou);
    cout << aboutYou << endl;

    return 0;
}
