#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lis;
    lis.push_front(3);
    lis.push_front(2);
    lis.push_front(1);
    lis.push_back(5);
    lis.push_back(4);
    for (int val : lis)
    {
        cout << val << " ";
    }
    cout << endl;
    // To delete
    lis.pop_back();  // It will delete 4
    lis.pop_front(); // It will delete 1

    for (int val : lis)
    {
        cout << val << " ";
    }
    cout << endl;

    /* 
    (size,erase,begin,end,rbegiin,rend,insert , front, back)
    all the function are same just like in the vector
    The only major difference is that vevtor is dynamic array
    but list is doubly linked Disk array (insertion via back & fornt).
    */
    return 0;
}