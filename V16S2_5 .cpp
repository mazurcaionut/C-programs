#include<iostream>
using namespace std;

int n,a[200][200],i,j;

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			a[i][j]=3;
	for(i=1;i<=n;i++)
		a[i][i]=4;
	for(i=1;i<=n;i++)
		a[i][n+1-i]=4;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	return 0;
}
