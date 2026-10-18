#include <iostream>
#include <vector>
using namespace std;

int main()

{
    cout << endl;
    // We can also insert values by this process.
    vector<int> vec; // A vector of 0 size
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    // .push_back is used to insert data at the last in vector
    vec.emplace_back(6);
    // .emplace_back is also used for data insertion .

    vec.pop_back();
    // .pop_back is used to delete data  from the last of  vector
    cout << " Size of vec is " << vec.size() << endl;
    cout << "Capacity of vec is " << vec.capacity() << endl;

    // To print all the data of vector we have following syntax
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << "\n";

    // We can print the specified value having just index
    cout << "The value at index 2 is " << vec[2] << " or " << vec.at(2) << endl;
    // The main thing is we can use [index] or .at(index) both works same

    // If we wanna print 1st and last value then..>
    cout << "Front is " << vec.front() << endl;
    cout << "Back is " << vec.back() << endl;

    // Different syntax of vector decleration
    // vetor <int> vec;
    // vector<int> vec = {1,2,3,4,5};
    // vector<int> vec(3,10); It will print (10) 3-times
    // vector<int> vec1={1,2,3,4,5};
    // and then vector<int> vec2(vec1); VEC2 will have value of vec1
    vector<float> vecf = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6};
    for (float print : vecf)
    {
        cout << print << " ";
    }
    cout << "\n"
         << endl;
    vector<int> basit(10, -1); // Here 1st  member is SIZE and 2nd member is VALUE.
    for (int print : basit)
    {
        cout << print << " ";
    }

    return 0;
}