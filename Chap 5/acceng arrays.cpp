#include<iostream>
using namespace std;
int main (){
int var[5];

cout<<"Enter any 5 number "<<endl;
for (int i =0; i<5; i++){
	cin>>var[i];
}
cout<<"Let's check the entered data is even or odd"<<endl;
for (int j=0; j<5; j++){
	if (var[j]%2==0){
		cout<<var[j];
		cout<<" is Even."<<endl;
	}
	else {
		cout<<var[j];
		cout<<" is Odd."<<endl;
	}
}
	return 0;
}