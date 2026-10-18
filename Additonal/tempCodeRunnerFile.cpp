#include <iostream>
using namespace std;
int main()
{

   int num1;
   cout << "Enter One Numbers: ";
   cin >> num1;

   if (num1 > 0)
   {
      cout << num1 << " is positive" << endl;
   }
   else if (num1 < 0)
   {
      cout << num1 << " is negative" << endl;
   }
   else if (num1 == 0)
   {
      cout << num1 << " is Zero" << endl;
   }
   return 0;
}