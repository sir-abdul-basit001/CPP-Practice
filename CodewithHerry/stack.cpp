// Stack is a LIFO(last int first Out ) data structure

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Top = " << s.top() << endl;

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    // We can swap two stacks
    stack<int> s2;
    s2.swap(s);

    cout << "s-stack size = " << s.size() << endl;
    cout << "s2-stack size = " << s2.size() << endl;

    return 0;
}