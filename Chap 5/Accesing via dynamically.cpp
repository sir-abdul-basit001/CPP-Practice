#include<iostream>
using namespace std;
int main(){
	int array[5];
	int i,j,counter=0;
	cout<<"Enter any five numbers"<<endl;
	for ( i=0; i<=5; i++){
		cout<<"Enter "<<counter + 1<<" numeber"<<endl;
		cin>>array[i];
		counter++;
			}
			for ( j = 0; j<=5;j++){
				cout<<"The value of "<<array[i]<<" is "<<array[j]<<endl;
			}
	return 0;
}