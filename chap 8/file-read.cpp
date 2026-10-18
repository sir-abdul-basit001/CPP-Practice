#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string st;
    ifstream in;
    in.open("sample.txt");
    in >> st;
    cout << st;
    while (in.eof() == 0)
    {
        getline(in, st);
        in >> st;
        cout << st;
    }

    return 0;
}