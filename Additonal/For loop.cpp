#include<iostream>
using namespace std;

int main()
{
	for (char ch ='a'; ch<='z'; ch++){
		cout<<ch<<" ";
	}
	cout<<endl;

for (char ch ='z'; ch>='a'; ch--){
		cout<<ch<<" ";
	}
	cout<<"\n";
	cout<<"o-o-o-o--o-o-o-o-o--o-o-o-o-o-o-\n"<<endl;
	
	for (char ch ='a'; ch<='z'; ch++){
		cout<<endl;
		for (char c =ch; c>='a'; c--){
			cout<<ch<<" ";
		}	
	}
 
  	for (char ch ='a'; ch<='z'; ch++){
		cout<<endl;
		for (char c =ch; c>='a'; c--){
			cout<<" ";
			for(char cha=c; cha<=c; cha++){
				cout<<cha<<" ";
			}
		}	
	}
  		
         	
	
	return 0;
}