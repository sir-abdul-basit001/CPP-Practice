#include<iostream>
using namespace std;
   void foo(int y){
   	cout<<"y  in foo() = "<<y<<endl;
   	y=6;
   	cout<<"y in foo() = "<<y<<endl;
   } //why y destroys here.
int main(){
	int x =5;
	cout<<"x in main () before call "<<x<<endl;
	foo(x);// argument is passed.
	cout<<"x in main () after call "<<x<<endl;
	foo(6);
	return 0;
}