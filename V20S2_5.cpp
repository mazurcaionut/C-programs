#include<iostream>
using namespace std;

int n,a[200][200],i,j;

int main()
{
	cout<<"n=";cin>>n;
	for(j=1;j<=n;j++)
		a[1][j]=1+j;
	for(i=1;i<=n;i++)
		a[i][1]=i+1;
	for(i=2;i<=n;i++)
		for(j=2;j<=n;j++)
			a[i][j]=a[i][j-1]+a[i-1][j];
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	return 0;
}
