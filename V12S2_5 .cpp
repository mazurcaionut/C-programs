#include<iostream>
using namespace std;

int n,a[200][200],i,j,p=1;

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<n+1-i;j++)
			a[i][j]=i;		
	for(i=1;i<=n;i++)
		for(j=n+2-i;j<=n;j++)
			a[j][i]=i-1;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	return 0;
}
