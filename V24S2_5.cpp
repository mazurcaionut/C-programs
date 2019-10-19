#include<iostream>
using namespace std;

int n,a[200][200],i,j,p;

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			a[i][j]=j;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	return 0;
}
