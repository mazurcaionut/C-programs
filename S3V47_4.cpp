#include<iostream>
using namespace std;

int n,i,maxim=0,s=0;
long v[200];

void cif(long nr,int &s)
{
	int u,a;
	a=nr;
	while(a)
	{
		u=a%10;
		s=s+u;
		a=a/10;
	}
}

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>v[i];
	cif(v[1],maxim);
	for(i=2;i<=n;i++)
	{
		cif(v[i],s);
		if(s>maxim) maxim=s;
	}
	for(i=1;i<=n;i++)
	{
		cif(v[i],s);
		if(s==maxim) cout<<v[i]<<" ";
	}
	return 0;
}
