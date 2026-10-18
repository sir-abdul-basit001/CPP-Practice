#include <iostream>

using namespace std;

int main () {
	  // array and pointer
	  int *arr = new int [4];
	  cout<<"Enter any 5 values"<<endl;
	  for (int i =0; i<5; i++){
	  	cin>>arr[i];
	  }
	  
	   for (int i =0; i<5; i++){
	   	cout<<"The value for arr["<<i<<"] is ";
	  	cout<<arr[i]<<endl;
	  }
	return 0;
}