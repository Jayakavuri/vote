#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter age to check if you are eligible to vote or not:";
	cin>>age;
	if(age>=18)
	{
		cout<<"\nYou are eligible";
	}
	else
	cout<<"\nYou are not eligible";
return 0;
}
