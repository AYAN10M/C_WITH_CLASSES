/*
    Vectors are the same as dynamic arrays with the ability to resize themselves automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.


    Syntax to Declare Vector in C++:
    std::vector<dataType> vectorName;
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // declaring vector v of type int
    vector<int> v;

    // inserting element in verctor v
    v.push_back(1);

    // accessing the element of a vector v
    cout << v[0];

    // inputing multiple vectors in v
    while (1)
    {
        int num;
        cout << "Enter the num:\t";
        cin >> num;

        if (num == -1)
        {
            break;
        }

        v.push_back(num);
    }



    return 0;
}