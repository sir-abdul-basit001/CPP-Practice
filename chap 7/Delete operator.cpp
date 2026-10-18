#include<iostream>

using namespace std;

int main ()

{
	// Delete operator 
	cout<<"Use of new operator"<<endl;
	int * ptr = new int (23);
//	cout<<"Value of new before delete operator is "<<&ptr<<end;
	cout<<"Value of new before delete operator is "<<*ptr;
	cout<<endl;
	delete ptr;
	cout<<"Value of new after delete operator is "<<*ptr;
	return 0;
}