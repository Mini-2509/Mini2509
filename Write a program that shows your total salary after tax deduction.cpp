/*
Write a program that inputs salary. 
If salary is 20000 or more, it deducts 7% of salary. 
If salary is 10000 or more or more but less than 20000, it deducts 1000. 
If salary is less than 10000, it deducts nothing and then displays net salary
*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(2);
	int salary;
	cout<<"Input your salary: ";cin>>salary;
	if(salary>=20000)
	 cout<<"Your total salary after deduction is "<<salary-(salary*0.07)<<endl;
	else if(salary<=20000&&salary>=10000)
	 cout<<"Your total salary after deduction is "<<salary-1000;
	else
	 cout<<"Your total salary is "<<salary;
}
