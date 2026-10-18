#include<iostream>
using namespace std;
  void doubler(int& x,int& y, int& z){
  	
  	x = x*2;
  	y = y*2;
  	z = z*2;
  }
int main (){
	 int a,b,c;
	 cout<<"Put the value of a,b,c"<<endl;
	 cin>>a>>b>>c;
	 cout<<"Before call "<<a<<","<<b<<","<<c<<endl;
	 doubler(a,b,c);
	 cout<<"After call "<<a<<","<<b<<","<<c<<endl;
	return 0;
}