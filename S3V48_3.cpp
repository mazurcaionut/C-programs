#include<iostream>
using namespace std;

int a,b,n,v[200],i,c=0;

int div(int x,int y)
{
	int a,b,r;
	a=x;b=y;
	do{
		r=a%b;
		a=b;
		b=r;
	}while(r);
	return a;
}

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
		if(div(i,n)==1)
		{
			c++;
			v[c]=i;
		}
	for(i=1;i<=c;i++)
		cout<<v[i]<<" ";	 
	return 0;
}
