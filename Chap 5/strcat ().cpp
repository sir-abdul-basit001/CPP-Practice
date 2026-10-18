#include<iostream>
#include<string>
using namespace std;
int main (){
    char str1[0],str2[0];
    str1[0] = {'H'};
    cout<<"Enter your name "<<endl;
    cin>>str2[0];
    strcat(str1,str2);
    cout<<str1;
	return 0;
}