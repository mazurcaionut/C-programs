#include<iostream>
using namespace std;

int n,i,j,a[200][200];

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		a[i][i]=2;
	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++)
			a[i][j]=1;
	for(i=2;i<=n;i++)
		for(j=1;j<i;j++)
			a[i][j]=3;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
	return 0;
}
