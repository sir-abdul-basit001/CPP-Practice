#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> o;
    o.emplace("tv", 24);
    o.emplace("laptop", 120);
    o.emplace("watch", 150);
    o.emplace("fridge", 100);

    for (auto p : o)
    {
        cout << p.first << " " << p.second << endl;
    }
    // All the remaining function are same as in map
    return 0;
}