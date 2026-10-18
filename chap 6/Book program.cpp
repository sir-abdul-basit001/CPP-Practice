#include<iostream>
using namespace std;
void demo(){

auto auto_var = 2;// It remains const but  why i don't know. and also we can't modify it 
static int static_var = 0;
 cout<<"Auto = "<<auto_var<<" ,  static = "<<static_var<<endl;
 ++auto_var; ++static_var;

}
int main (){
//	auto_var = 9;
	int i=1;
	while (i<5){
		demo();
		i++;
	}
	return 0;
}