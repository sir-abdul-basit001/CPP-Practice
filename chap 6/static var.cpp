#include<iostream>
using namespace std;
 static float static_var = 9.8; 
 const float const_var=8.0;
 
int main (){
//	const_var = 9.8;--> Throws an error bcs we can't modify const var.
	
	 cout<<"The value of static variable is "<<static_var<<" m/s\n";
	 cout<<"The value of constant is "<<const_var<<endl;
	return 0;
}