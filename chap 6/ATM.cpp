
#include<iostream>
using namespace std;
  
int main (){
  int pass = 1234;
  int amount;
  char ch;
  int balance = 1000;
  
  cout<<"=========================="<<endl;
  cout<<"Welcome to ABAnjum's ATM"<<endl;
  cout<<"=========================="<<endl;
  cout << "Enter your password "<<endl;
  cin>>pass;
  if (pass == 1234){
  	cout<<"Welcomw ABAnjum"<<endl;
  }
  else {
  	cout<<"Invalid password"<<endl;
  	exit (0);
  }
  for (int i = 0; i<4; i++) {
  
       									 cout<<"__________________"<<endl;
       									 cout<<"    ATM-Menu"<<endl;
       									 cout<<"__________________"<<endl;
       									 cout<<"\n1.Balance\n2.Deposition\n3.Transection\n4.Exit"<<endl;
       									 cout<<"Enter your choice"<<endl;
       									 cin>>ch;
       									 switch (ch){
       									 	case '1': cout<<"Your balance is "<<balance<<" Rupess"<<endl;
												break;
       									 	case '2': cout<<"Enter your amount to deposite "<<endl;
       									 	cin>>amount;
       									 	balance += amount;
       									 	break;
       									 	case '3': cout<<"Enter your amount for transection "<<endl;
       									 	cin>>amount;
       									 	balance -= amount;
       									 	break;
       									 	case '4': cout<<"Thanks for Using ABAnjum's ATM "<<endl;break;
   											    									 	
											}
       								}
       									
return 0;
}