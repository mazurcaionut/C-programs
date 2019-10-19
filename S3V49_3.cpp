#include<iostream>
using namespace std;

int a,b,n,v[200],i;

int main()
{
	cout<<"a=";cin>>a;
	cout<<"b=";cin>>b;
	cout<<"n=";cin>>n;
	if(a>b)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	for(i=a;i<=b;i++)
	{
		if(i%n==0) cout<<i<<" ";
	}
	return 0;
}
