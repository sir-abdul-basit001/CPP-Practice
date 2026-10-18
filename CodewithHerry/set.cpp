// Lowerbound is a function that prints last function if don't present then
// will print one digit ahead if no greater value is present the  will print {end()}
#include <iostream>
#include <set>
using namespace std;

int main()
{
  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5);
  // Lower_bound
  cout << "Lower_bound = " << *(s.lower_bound(4)) << endl; //-->Should not be less than key(4)
  cout << "upper_bound = " << *(s.upper_bound(4)) << endl; //-->Greater than key(4), Not equal to key

  // As set have unique values so if we dublicate the values then we can'nt
  // print them twise

  s.insert(1);
  s.insert(2);
  s.insert(3);

  // Set ignores the replicated value as we can see it's size
  cout << "Size: " << s.size() << endl;
  for (int val : s)
  {
    cout << val << " ";
  }
  cout << endl;
  return 0;
}
/*
(count,erase find, size,empty,etc)
All the function are same
*/