#include<iostream>
using namespace std;
float pi = 3.14; //  pi is a Globle var bcs it is accessible in all over the program.
void rep();
int main (){

	/* Globle var is a var that is accessible in all over the program. 
	*/
	cout<<"This is accesssible inside main "<<pi<<endl;
	pi = 2.9; // We can also modify value of globle var by our desired value.
	 for (int i=1; i<+5; i++){
	 	cout<<i<<"-"<<pi<<endl;
	 }
	 	
	 rep();
	return 0;
}
void rep(){
	cout<<"\nPi is also accessible in protoype function, outside main scope ("<<pi<<")"<<endl;
}
