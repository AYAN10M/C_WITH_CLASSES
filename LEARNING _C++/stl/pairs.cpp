/*
    Pair is used to combine together two values that may be of different data types. Pair provides a way to store two heterogeneous objects as a single unit. It is basically used if we want to store tuples. The pair container is a simple container defined in <utility> header consisting of two data elements or objects.

    (*) The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).

    (*) Pair can be assigned, copied, and compared. The array of objects allocated in a map or hash_map is of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.

    (*) To access the elements, we use variable name followed by dot operator followed by the keyword first or second.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, int> nums = {1, 2};

    // to access one of the element
    cout << "The first element of the pair is " << nums.first << endl;

    // pair within pair
    pair<int, pair<int, int>> data = {20, {18, 21}};
    if (data.first >= data.second.first && data.first >= data.second.second)
    {
        cout << "You are eligible to cast vote." << endl;
        cout << "You are eligible to marry." << endl;
    }
    else if (data.first >= data.second.first && data.first < data.second.second)
    {
        cout << "You are eligible to cast vote." << endl;
        cout << "But, you are not eligible to marry yet." << endl;
    }
    else
    {
        cout << "You are not eligible to cast vote." << endl;
        cout << " as well as, you are not eligible to marry yet." << endl;
    }
    
    // array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    cout << arr[3].second << endl;

    return 0;
}