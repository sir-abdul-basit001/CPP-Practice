#include<iostream>
using namespace std;

int  main () {
	  // New operator
//	  int *a = 4;
	  int *a = new int (3);
	  cout<<"The value of a is "<<a<<endl;
	  cout<<"The value of a is "<<*a<<endl;
	  cout<<"The value of a is "<<&a<<endl;
	  
	  
	  
	return 0;
}