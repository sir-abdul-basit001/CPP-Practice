#include<iostream>
using namespace std;
 
int main(){
    /* local variables
	 a variable with any limit is  called local variable.
	  */	
	  int age;
	  cout<<"Enter your age "<<endl;
	  cin>>age;
	  // age is local var bcs it is accessible within main scop. and can't be accessed in any other function
	  cout<<" your age is "<<age<<endl;
	return 0;
}