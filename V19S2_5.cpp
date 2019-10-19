#include<iostream>
using namespace std;

int n,a[200][200],i,j;

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(j%2!=0) a[i][j]=i+j;
			else a[i][j]=i;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	return 0;
}
