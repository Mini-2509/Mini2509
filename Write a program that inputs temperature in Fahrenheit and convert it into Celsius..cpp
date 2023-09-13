#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(2);
	cout<<"~~~~~~Temperature from Fahrenheit to Celsius."<<endl;
	double a;
	cout<<"Input the temperature (In Fahren) : ";cin>>a;
	cout<<endl;
	cout<<a<<" F = "<<((a*5)-(5*32))/9<<" C.";
}
