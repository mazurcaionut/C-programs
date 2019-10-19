#include<iostream>
using namespace std;

int n,a[200],i,k,s=0,go=1,ok=1,d;

void s1(int &a,int &b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}

int s2(int a[100],int p,int q)
{
	int i,ok=1;
	for(i=p;i<=q && ok;i++)
		if(a[i]%5==0) 
		{
			ok=0;
			return i;
		}
	if(ok==1) return -1;
}

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		if(a[i]%5==0) s++;
	if(s<2) 
	{
		cout<<"0";
		go=0;
	}
	for(i=n;i>=1 && go && ok;i--)
		if(a[i]%5==0) 
		{
			d=s2(a,1,i-1);
			k=i;
			ok=0; 
		}
	s1(a[d],a[k]);
	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";	
	return 0;
}
