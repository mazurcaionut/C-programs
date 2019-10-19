#include<iostream>
using namespace std;

int n,x[200],i,maxim=0,nr,ok,j;

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>x[i];
	for(i=1;i<=n;i++)
		if(x[i]%2==0)
			{
				ok=1;nr=0;
				for(j=i;j<=n && ok;j++)
					if(x[j]%2!=0) ok=0;
					else nr++;
				if(maxim<nr) maxim=nr;
			}
	cout<<maxim;
	return 0;
}
