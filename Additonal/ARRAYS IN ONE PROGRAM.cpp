#include<iostream>
using namespace std;

int main () {
	// Arrays Example
	int marks[]={32, 34, 12, 56, 55};
    int numbers[]={1,2,3,45,54};
	int i=0;
    int markmath[4];
    markmath[0]=90;
    markmath[1]=34;
    markmath[2]=22;
    markmath[3]=2;
    cout<<"Without any Loop"<<endl;
	cout<<marks[0]<<" ";
	cout<<marks[1]<<" ";
	cout<<marks[2]<<" ";
	cout<<marks[3]<<" ";
	cout<<marks[4]<<"\n";

	
	// We can access arrays by any loop
	
	// for( i=0; i<5; i++){
	// 	cout<<"By for, the value of marks["<<i<<"] = "<<numbers[i]<<" \n";
	// }

	cout<<endl;
// while (i<5)
// {
//     cout<<"By while,the value of marks["<<i<<"] = "<<marks[i]<<" \n";
//     i++;
// }
cout<<"\n";
   // Using Do while loop
   do
   {
    cout<<"By do-while,the value of marks["<<i<<"] = "<<markmath[i]<<" \n";
    i++;
   } while (i<5);
   
   
	
   return 0;
	}

