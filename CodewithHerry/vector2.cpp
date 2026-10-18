#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    // Different forms of erase.
    // vec.erase(vec.begin()); // It will erase 1st value from vector
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << "\n";

    cout << " or " << endl;

    // vec.erase(vec.begin() + 2); // It will erase value 3 from vector

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << "\n";

    // To delete a series of value we have this syntax
    // vec.erase(start, end);--> Here start is included and ending is not or [start,end).
   //--> // vec.erase(vec.begin() + 2, vec.begin() + 4);
    
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << "\n";

    // if we wanna insert a value then w'll have this syntax
    vec.insert(vec.begin()+2, 100);
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << "\n";

    // If we wanna delete all the values from vector
    vec.insert(vec.begin()+2, 100);
    // vec.clear();-->This empty the vector
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << "\n";
    cout<<"The size is: "<<vec.size()<<endl;
    cout<<"The capacity is: "<<vec.capacity()<<endl;
    // If we wanna check our vector is empty or not

    cout<<vec.empty();
    // Print 1 if vector is empty and print 0 if vector is not empty
    

    return 0;
}