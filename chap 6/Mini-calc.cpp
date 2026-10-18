#include<iostream>
using namespace std;
  
int main (){}
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
       									 cout<<"__________________"<<endl;
       									 cout<<"    ATM-Menu"<<endl;
       									 cout<<"__________________"<<endl;
       									 cout<<"\n1.Balance\n2.Deposition\n3.Transection\n4.Exit"<<endl;
       									 cout<<"Enter your choice"<<endl;
       									 cin>>ch;
       									 switch (ch){
       									 	case '1': cout<<"Your balance is "<<balance<<"Rupess"<<endl;
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
       									 
       									
return 0;
}
	using namespace std;
  	 float sum (float a, float b){
   	
   		 return a+b;
   	
  					 }
   	float diff(float a, float b){
   		return a-b;
  	 }
  		 float mul(float a, float b){
   	return a*b;
  		 }
   float division(float a, float b){
   	return a/b;
   }
//   float abs(float a, float b){
//   	return a % b;
//   }
int main (){
	for (int i =0; i<4; i++){
	
	int a; int b; char ch;
   	 cout<<"Enter two numbers"<<endl; 
   	 cin>>a>>b;
   	 cout<<"What u wanna do "<<endl;
   	 cout<<"1.Addition\n2.Subtraction\n3.Multiplivation\n4.division\n"<<endl;
   	 
   	 cin>>ch;
   	 switch (ch){
   	 	case '1': cout<<a<<" + "<<b<<" = "<<sum(a,b)<<endl; break;
   	 		case '2': cout<<a<<" - "<<b<<" = "<<diff(a,b)<<endl; break;
   	 			case '3': cout<<a<<" * "<<b<<" = "<<mul(a,b)<<endl; break;
   	 				case '4': cout<<a<<" / "<<b<<" = "<<division(a,b)<<endl; break;
//   	 					case '5': cout<<a<<" % "<<b<<" = "<<abs()<<endl; break;
   	 						default : cout<<"Invalid choice"<<endl; exit(0);
	        																	}
		
																				    }
   	 
																						return 0;
																									}