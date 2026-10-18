#include<iostream>
using namespace std;
// parameters that are in other than main functions are called fornmal parameters.
  double  sum (int a, int b){
  	return a+b;
  }
int main () {
	  cout<<sum(2,3);// parameters that are called in main scope are called actual parameters.
	
	return 0;
}