#include<iostream>
using namespace std;
int main()
{
	int num,a=1,count=1;
	cout<<"Input a number: ";cin>>num;
	cout<<"Factorial: "<<endl;
	a=num;
	while(a>0)
	{
		cout<<a;
		if (a>1)
		 cout<<" x ";
		count*=a;
		a--;
	}
	cout<<" = "<<count;
}
