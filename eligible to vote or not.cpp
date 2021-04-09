#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age :-";
	cin>>age;
	if(age<=17)
	{
	cout<<"\nyou are not eligible to vote,until you complete 18 years";
  }  
	else
	{
	cout<<"\nyou are eligible to vote ";
  }
	return 0;
}
