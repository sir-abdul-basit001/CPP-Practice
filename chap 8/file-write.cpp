#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");
    out << "This is me\n";
    out << "This is me also\n";
    out << "This is also me\n";
    out << "This is alsi me\n";
    out << "This is alsi me\n";
    out << "This is alsi me\n";
    out << "This is alsi me\n";
    out << "This is alsi me\n";
    out << "This is alsi me\n";
    out << "This is alsi me\n";
    out << "This is alsi me\n";
    out.close();
    return 0;
}