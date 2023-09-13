/*
Write a program that inputs base height from the user and 
calculates area of a triangleby using the formula Area = ½ * Base *Height
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(2);
	float height, base;
	cout<<"Input the height of the triangle: ";
	cin>>height;
	cout<<"Input the base of the triangle: ";
	cin>>base;
	cout<<"The area of the riangle is "<<0.5*height*base<<endl;
}
