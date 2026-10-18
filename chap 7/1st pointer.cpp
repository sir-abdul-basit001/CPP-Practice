#include<iostream>
using namespace std;

int main () {
	 // pointers
	 int marks ;
	 cout<<"Put the value of marks"<<endl;
	 cin>>marks;
	 cout<<"The value by simple cout is "<<marks<<endl;
	 int* p;
	 cin>>*p;
	 cout<<"The value by pointer is "<<*p<<endl;
	return 0;
}