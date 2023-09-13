/*
Write a program that inputs test score of a student and displays his grade on the following scale
Test Score		Grade
>=90			A
80-90			B
70-79			C
60-69			D
Below 50		 F

*/
#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
 	cout<<fixed<<setprecision(2);
	
	int score;
	cout<<"Input your total score(0-100): ";cin>>score;
	if(score>=90&&score<=100)
		cout<<"Your grade is \'A\'."<<endl;
	else if(score>=80)
		cout<<"Your grade is \'B\'."<<endl;
	else if(score>=70)
		cout<<"Your grade is \'C\'."<<endl;
	else if(score>=60)
		cout<<"Your grade is \'D\'."<<endl;
	else if(score<=50&&score>=0)
		cout<<"Your grade is \'F\'."<<endl;
	else
		cout<<"Invalid score.\nExiting...";	
	return 0;
}
