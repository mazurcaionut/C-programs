#include<iostream>
using namespace std;

int n,m,a[200][200],i,j,minim;

int main()
{
	cout<<"n=";cin>>n;
	cout<<"m=";cin>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
				cin>>a[i][j];
	for(j=1;j<=m;j++)
		{
			minim=a[1][j];
			for(i=2;i<=n;i++)
				if(minim>a[i][j]) minim=a[i][j];
			cout<<minim<<" ";
		}
	return 0;
}
