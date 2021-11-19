#include<iostream>
using namespace std;
fact(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int num,a;
	cout<<"Enter the number : ";
	cin>>num;
	a=fact(num);
	cout<<"factorial ="<<a;
}
