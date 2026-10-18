#include<iostream>
using namespace std;
// why & is used and if we remove it then why 
// it don't increament.
void add_one(int &a){
	a++;
}
int main(){
	int x ;
	cout<<"Put the value of x "<<endl;
	cin>>x;
	cout<<"The value of x in main before call "
	<<x<<endl;
	add_one(x);
	cout<<"The value of x after call "
	<<x<<endl;
	
	return 0;
}