/*
Write a program that inputs radius from the user and calculates area and
circumference of cube using formula Area = 4pr2 	Circumference = 4/3pr3.
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(2);
	float r;
	cout<<"Input  the radius of the cube: ";cin>>r;
	cout<<"The area of the cube is: "<<4*M_PI*r*r<<endl; 
	cout<<"The circumference of the cube is: "<<4/3*M_PI*r*r*r<<endl; 
}
