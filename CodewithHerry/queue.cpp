#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front = " << q.front() << endl;
    cout << "Back = " << q.back() << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    // Properity Queue

    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(10);
    pq.push(4);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // If we wanna accending order
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(3);
    p.push(5);
    p.push(10);
    p.push(4);

    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
    cout << endl;

    return 0;
}