/*
Write a program that inputs 4 numbers and calculates the sum,
average, and product of all the numbers
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	float sum,num_1,num_2,num_3,num_4;
 	double prod;
	cout<<"Input 1st number: ";cin>>num_1;
	cout<<"Input 2nd number: ";cin>>num_2;
	cout<<"Input 3rd number: ";cin>>num_3;
	cout<<"Input 4th number: ";cin>>num_4;
	//sum
	sum = num_1+num_2+num_3+num_4;
	//product
	prod = num_1*num_2*num_3*num_4;
	cout<<fixed<<setprecision(2);
	cout<<"The sum is "<<sum<<endl;
	cout<<endl;
	cout<<"The average is "<<sum/4<<endl;
	cout<<endl;
	cout<<"The product is "<<prod<<endl;
}
