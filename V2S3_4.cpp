#include<iostream>
using namespace std;

int n,u;

int f(int a)
{
	int d=2,p,s=0;
	while(a>1)
	{
		p=0;
		while(a%d==0)
		{
			a=a/d;
			p=p+1;
		}
		if(p!=0) s=s+p;
		if(d==2) d=3;
		else d=d+2; 
	}
	return s;
}


int main()
{
	cout<<"n=";cin>>n;
	u=n%10*10+n/10;
	if(f(n)==1 && f(u)==1) cout<<"DA";
	else cout<<"NU";
	return 0;
}
