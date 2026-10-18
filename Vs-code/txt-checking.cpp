#include<iostream>
#inlcude<fstream>
#inlcude<string>
using namespace stdd;

int main (){
	ofstream out;
	out.open("sample01.txt");
	out<<"Hello Dude";
	out.close();
}