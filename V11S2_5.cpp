#include<iostream>
using namespace std;


int n,m,a[200][200],i,j,minim;

int main()
{
	cout<<"m=";cin>>m;
	cout<<"n=";cin>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(i=1;i<=m;i++)
		{
			minim=a[i][1];
			for(j=2;j<=n;j++)
				if(minim>a[i][j]) minim=a[i][j];
			cout<<minim<<" ";
		}
	return 0;
}
