#include<iostream>
using namespace std;


long int n;
int i,p,j,imp=0;

int cif(long int a,int b)
{
	int u,nr=0;
	while(a)
	{
		u=a%10;
		if(u==b) nr++;
		a=a/10;
	}
	return nr;
}


int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=9;i=i+2)
	{
		p=cif(n,i);
		if(p)
		{
			for(j=1;j<=p;j++)
				imp=imp*10+i;
		}
	}
	cout<<imp;
	return 0;
}
