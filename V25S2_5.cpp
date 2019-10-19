#include<iostream>
using namespace std;

int m,n,a[200][200],i,j,maxim=0,p,l;


int main()
{
	cout<<"m=";cin>>m;
	cout<<"n=";cin>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(j=1;j<=n;j++)
		{
			p=1;
			for(i=1;i<=m;i++)
				p=p*a[i][j];
			if(p>maxim) maxim=p; 
		}
	for(j=1;j<=n;j++)
	{
		p=1;
		for(i=1;i<=m;i++)
			p=p*a[i][j];
		if(p==maxim) cout<<j<<" ";	
	}	
	return 0;
}
