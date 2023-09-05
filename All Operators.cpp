#include<iostream>
using namespace std;
int main()
{
	//variable initialization and assignment operator
	int num_1=50,num_2=25;
	//variable declaration
	int final;
	//Arithmetic operators
	cout<<"-----Arithmetic operators-----"<<endl;
	//addition
	final=num_1+num_2;// = 75
	cout<<num_1<<" + "<<num_2<<" = "<<final<<endl;
	//subtraction
	final=num_1-num_2;// = 25
	cout<<num_1<<" - "<<num_2<<" = "<<final<<endl;
	//multiplication
	final=num_1*num_2;// = 1250
	cout<<num_1<<" * "<<num_2<<" = "<<final<<endl;
	//division
	final=num_1/num_2;// = 2
	cout<<num_1<<" / "<<num_2<<" = "<<final<<endl;
	//Modulus
	final=num_1%num_2;// = 0
	cout<<num_1<<" % "<<num_2<<" = "<<final<<endl;
	
	cout<<endl;
	//Relational operator
	
	num_1=50;
	num_2=25;
	int num_3=25;
	cout<<"-----Relational operator-----"<<endl;
	//greater than
	(num_1>num_2)?cout<<num_1<<" > "<<num_2<<"   : "<<"True"<<endl:cout<<num_1<<" > "<<num_2<<"   : "<<"False"<<endl;
	//less than
	(num_1<num_2)?cout<<num_1<<" < "<<num_2<<"   : "<<"True"<<endl:cout<<num_1<<" < "<<num_2<<"   : "<<"False"<<endl;
	//equal to
	(num_1==num_2)?cout<<num_1<<" == "<<num_2<<"  : "<<"True"<<endl:cout<<num_1<<" == "<<num_2<<"  : "<<"False"<<endl;
	//greater than or equal to
	(num_1>=num_2)?cout<<num_1<<" >= "<<num_2<<"  : "<<"True"<<endl:cout<<num_1<<" >= "<<num_2<<"  : "<<"False"<<endl;
	//less than or equal to
	(num_1<=num_2)?cout<<num_1<<" <= "<<num_2<<"  : "<<"True"<<endl:cout<<num_1<<" <= "<<num_2<<"  : "<<"False"<<endl;
	//not equal to
	(num_1!=num_2)?cout<<num_1<<" != "<<num_2<<"  : "<<"True"<<endl:cout<<num_1<<" != "<<num_2<<"  : "<<"False"<<endl;
	
	cout<<endl;
	//Logical operators
	num_1=50;num_2=25;num_3=15;
	cout<<"-----Logical operators------"<<endl;
	//AND operator
	/*
	final=(num_1>num_2&&num_2>num_3)?true:false;
	cout<<num_1<<" > "<<num_2<<" && "<<num_2<<" > "<<num_3<<" =    "<<final<<endl;
	*/
	if(num_1>num_2&&num_2>num_3)
	 cout<<num_1<<" > "<<num_2<<" && "<<num_2<<" > "<<num_3<<"   =    True"<<endl;
	else
	 cout<<num_1<<" > "<<num_2<<" && "<<num_2<<" > "<<num_3<<"   =    False"<<endl;
	cout<<endl;
	//Or operator 
	/*
	final=(num_1<=num_2||num_2!=num_3)?true:false;
	cout<<num_1<<" <= "<<num_2<<" || "<<num_2<<" != "<<num_3<<" =    "<<final<<endl;
	*/
	if(num_1>num_2||num_2!=num_3)
	 cout<<num_1<<" <= "<<num_2<<" || "<<num_2<<" != "<<num_3<<" =    True"<<endl;
	else
	 cout<<num_1<<" <= "<<num_2<<" || "<<num_2<<" != "<<num_3<<" =    False"<<endl;
	cout<<endl;
	//Not operator
	/*
	final=!(num_1<num_2)?true:false;
	cout<<"!("<<num_1<<" < "<<num_2<<" )"<<num_2<<"     =    "<<final<<endl;
	*/
	if(!(num_1<num_2))
	 cout<<"!("<<num_1<<" < "<<num_2<<" )"<<num_2<<"        =    True"<<endl;
	else
	 cout<<"!("<<num_1<<" < "<<num_2<<" )"<<num_2<<"        =    False"<<endl;
	cout<<endl;
	
	
	//Increment/Decrement operators
	cout<<"-----Increment/Decrement operators-----"<<endl;
	int a=25;
	cout<<"a = 25"<<endl;
	//pre-increment operator
	cout<<"++a = "<<++a<<endl;
	//post-increment operator
	cout<<"a++ = "<<a++<<endl;
	//post-decrement operator
	cout<<"a-- = "<<a--<<endl;
	//pre-decrement operator
	cout<<"--a = "<<--a<<endl;
}
