#include<iostream>
using namespace std;

int n,p,a[200][200],i,j,l=1;

int main()
{
	cout<<"n=";cin>>n;
	cout<<"p=";cin>>p;
	for(i=1;i<=n;i++)
		for(j=1;j<=p;j++)
			{
				a[i][j]=l*l;
				l=l+2;
			}
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=p;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	return 0;
}
