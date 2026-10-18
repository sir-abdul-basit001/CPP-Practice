#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<string, int> m;
    // There will be no use of SQUARE_BRACKETS
    m.emplace("tv", 25);
    m.emplace("tv", 25);
    m.emplace("tv", 25);
    m.emplace("tv", 25);

    // m.erase("tv");// IT will erase all the data
    m.erase(m.find("tv")); // It will erease just one value
    for (auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}