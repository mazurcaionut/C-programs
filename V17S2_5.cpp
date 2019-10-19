#include<iostream>
using namespace std;

int n,a[200][200],i,j;

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		a[i][n+1-i]=n;
	for(i=1;i<=n;i++)
		for(j=n-i;j>0;j--)
			a[i][j]=a[i][j+1]-1;
	for(i=1;i<=n;i++)
		for(j=n+2-i;j<=n;j++)
			a[i][j]=a[i][j-1]+1;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	return 0;
}
