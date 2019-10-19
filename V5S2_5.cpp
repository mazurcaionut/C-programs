#include<iostream>
using namespace std;

int n,a[200][200],i,j,m;

int main()
{
	cout<<"n=";cin>>n;
	cout<<"m=";cin>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			if(i>j) a[i][j]=i;
			else a[i][j]=j;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	return 0;
}
