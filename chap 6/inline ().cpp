#include<iostream>
using namespace  std;
  inline int mini(int a, int b){
   return a>b? b:a;  	
  }
int main (){
	for (int i=0; i<5; i++){
	
	int x,y;
	cout<<"Enter any two numbers"<<endl;
	cin>>x>>y;
	cout<<"The minimun number in between "<<x<<" and "<<y
	<<" is "<<mini(x,y)<<endl;
}
return 0;
}



