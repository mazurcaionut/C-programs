#include<iostream>
using namespace std;

int i,j,n,a[200][200];

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			a[i][j]=i+j;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
	return 0;
}
