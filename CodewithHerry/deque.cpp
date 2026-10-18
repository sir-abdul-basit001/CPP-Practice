#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d = {3, 4};
    d.push_back(2);
    d.push_front(1);
    d.emplace_back(5);
    d.emplace_front(6);

    for (int val : d)
    {
        cout << val << " ";
    }
    cout << endl;

    d.pop_back();
    d.pop_front();
    for (int val : d)
    {
        cout << val << " ";
    }
    cout << endl;

    cout<<"The value at index(2) is: "<<d[2]<<endl;

    return 0;
}
/* 
    (size,erase,begin,end,rbegiin,rend,insert , front, back)
    All the function are same just like in the list
    Random access is possible in deque(bcs of arrays) while in that of list there 
    is no random access
    



    1. One word is (deque) and other is (dequeue)
    Deque is the sequence container of stl while dequeue is the genric function 
    to remove element in normal dwque function
    */