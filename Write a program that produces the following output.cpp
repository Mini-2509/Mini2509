/*
Write a program that produces the following output:
1	1
2	2
3	4
4   8
5   16
6	32
7	64
*/
#include<iostream>
using namespace std;
int main()
{
	int a=1,b=1;
	for(int i=0;i<7;i++)
	{
		cout<<a++<<"\t"<<b<<endl;
		b=b*2;
	}
}
