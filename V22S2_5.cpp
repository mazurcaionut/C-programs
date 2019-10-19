#include<iostream>
using namespace std;

int m,n,a[200][200],i,j,p;

int main()
{
	cout<<"m=";cin>>m;
	cout<<"n=";cin>>n;
	p=m*n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			{
				a[i][j]=p;
				p--;
			}
	for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	return 0;
}
