#include<iostream>
using namespace std;

int n,a[200][200],i,j,l=1;

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			{
				a[i][j]=l;
				l++;
				if(l>9) l=1;
			}
	for(j=1;j<=n;j++)
		cout<<a[1][j]<<" ";
	for(i=2;i<=n;i++)
		cout<<a[i][n]<<" ";
	for(j=n-1;j>0;j--)
		cout<<a[n][j]<<" ";
	for(i=n-1;i>1;i--)
		cout<<a[i][1]<<" ";
	return 0;
}
