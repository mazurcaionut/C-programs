#include<iostream>
using namespace std;

int m,n,a[200][200],i,j;

int main()
{
	cout<<"m=";cin>>m;
	cout<<"n=";cin>>n;
	for(j=1;j<=n;j++)
		a[1][j]=j;
	for(i=1;i<=m;i++)
		a[i][1]=i;
	for(i=2;i<=m;i++)
		for(j=2;j<=n;j++)
			a[i][j]=a[i-1][j]+a[i][j-1];
	for(i=1;i<=m;i++)
		{
			for(j=1;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	cout<<a[m][n];
	return 0;
}
