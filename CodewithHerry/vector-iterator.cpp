#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Concept of iterator.
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Iterator begin(): " << *(vec.begin()) << endl;
    cout << "Iterator end(): " << *(vec.end()) << endl;

    // Iterator initialization
    // Forward iterator
    vector<int>::iterator it;
    // for (it = vec.begin(); it != vec.end(); it++)
    // {
    //     cout << *(it) << " ";
    // }
    // cout << endl;

    // Reverse iterator
    // vector<int>::reverse_iterator itr;
    // for (itr = vec.rbegin(); itr != vec.rend(); itr++)
    // {
    //     cout << *(itr) << " ";
    // }
    // cout << endl;
    // We can alse initialize our iterator
    for (auto itr = vec.rbegin(); itr != vec.rend(); itr++)
    {
        cout << *(itr) << " ";
    }
    cout << endl;

    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     cout << "Iterator begin(): " << *(vec.begin()) << endl;
//     cout << "Last element: " << *(vec.end() - 1) << endl;

//     return 0;
// }
