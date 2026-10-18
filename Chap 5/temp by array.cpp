#include<iostream>
using namespace std;
int main () {
	
//	float temp[4][5] = {{23.4, 20.0},{33.3,44.4}};
int temp[5][5] ;
cout<<"Enter Temperature in Two Dimentional Array"<<endl;
for(int i = 0; i<=5; i++){
	cin>>temp[i][i];
}
	for (int i =0; i<temp[5][5]; i++){
		cout<<"The value of tem["<<i<<"] = "<<temp[i]<<endl;
	}
	return 0;
}
//
//#include<iostream>
//using namespace std;
//
//int main(){
//	
//	float temp[2][2];
//	for(int i=0; i<=2)
//	return 0;
//}