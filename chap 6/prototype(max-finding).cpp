#include<iostream>
using namespace std;
 int max(int a ,int b,int c);//prototype
int main(){
cout<<max(23,34,45);
	return 0;
}
int max(int a, int b, int c){
	if (a>b && a>c){	
			cout<<a<<" is gretest"<<endl;			
	}
	else if (b>a && b>c){	
	}
	else { cout<<c<<" is greatest"<<endl;
	}
}