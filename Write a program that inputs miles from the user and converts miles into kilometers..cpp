//Write a program that inputs miles from the user and 
//converts miles into kilometers. One mile is equal to 1.609km.
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(2);
 	double mile;
	cout<<"Input the distance in miles: ";cin>>mile;
	cout<<mile<<" mile(s) = "<<1.609*mile<<" km(s)"<<endl;
}
