#include<iostream>
using namespace std;

int m,n,i,j,a[200][200];

int main()
{
	cout<<"m=";cin>>m;
	cout<<"n=";cin>>n;
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	cout<<endl;
	for(i=2;i<=m;i=i+2)
	{
		for(j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
