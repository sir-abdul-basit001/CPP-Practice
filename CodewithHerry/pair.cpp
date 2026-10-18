#include <iostream>
#include <vector>
using namespace std;

int main()
{
    pair<string, int> p = {"Anjum", 5};

    cout << "1st element is: " << p.first << endl;
    cout << "2nd element is: " << p.second << endl;

    pair<int, pair<char, int>> pai = {1, {'a', 3}};
    cout << endl;
    cout << "1st element is: " << pai.first << endl;
    cout << "1st element of 2nd pair  is: " << pai.second.first << endl;
    cout << "2nd element of2nd element is: " << pai.second.second << endl;

    // ----------------Pairs  in vectors------------------
    vector<pair<int, int>> vec = {{1, 2}, {2, 3}, {3, 4}};

    // Insertion by push_back and emplace_back
    vec.push_back({4, 5});  // This just insert
    vec.emplace_back(5, 6); // This creats in-place objects

    for (pair<int, int> p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << "\n"
         << endl;
    // OR we can also print by for loop by writing auto
    for (auto p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}