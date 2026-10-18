#include<iostream>
#include<cmath>
using namespace std;

int main () {
                int a,b,c;
                float discr,x1,x2;

                cout<<"Enter The value of a, b and c: ";
                cin>>a>>b>>c;

                discr= b*b - 4*a*c;

                if (a== 0){
                    cout<<"Equation is not QUADRATIC: "<<endl;
                    
                }
                else{
                    x1 = -b+sqrt(b*b - 4*a*c);
                    x2 = -b-sqrt(b*b - 4*a*c);
                }

                cout<<"1st ROOT is: "<<x1<<endl;
                cout<<"2nd ROOT is: "<<x2<<endl;

    return 0;
}