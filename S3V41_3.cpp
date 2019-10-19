#include<iostream>
#include<math.h>
using namespace std;

int a[100],n,i;

int p(int a[100],int n)
{
	int i,nr,ok=1,j;
	for(i=1;i<=n && ok;i++)
		{
			nr=0;
			for(j=1;j<=n;j++)
				if(a[i]==a[j]) nr++;
			if(nr>1) ok=0;
		}
	if(ok==1)
	{
		for(i=2;i<n && ok;i++)
			if(abs(a[i]-a[i-1])==1 || abs(a[i]-a[i+1])==1) ok=0;
	}
	else return 0;
	if(ok==1) return 1;
	else return 0;
}

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	cout<<p(a,n);
	return 0;
}
