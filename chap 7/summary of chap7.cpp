#include<iostream>
using namespace std;

int main () {
	// pointers
	int a = 3;
	int* b = &a;
//	&--> is used for address.
//	its name is address operator.
	cout<<"The address of &a is     "<<&a<<endl;
	cout<<"The address of a by b is "<<b<<endl;
//	*--> is used for value.
//	its name is deference operator.
	cout<<"The value at b is by (*b) "<<*b<<endl;
	return 0;
}