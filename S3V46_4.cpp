#include<iostream>
using namespace std;

float n;

void cifre(long nr,int &nc,int &sc)
{
	int u;
	while(nr)
	{
		nc++;
		u=nr%10;
		sc=sc+u;
		nr=nr/10;
	}
}

int p(long x)
{
	int nc=0,sc=0,u,a,ok=1,p=1;
	long inv;
	a=x;
	while(a && ok)
	{
		u=a%10;
		inv=a/10*p+x%p;
		cifre(inv,nc,sc);
		if(u==sc/nc) ok=0;
		p=p*10;
		a=a/10;
	}
	if(ok==0) return 1;
	else return 0;
}

int main()
{
	cout<<"n=";cin>>n;
	cout<<p(n);
	return 0;
}
