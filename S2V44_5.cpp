#include<iostream>
using namespace std;

int n,i,j,a[200][200];

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			{
				if(i<j) a[i][j]=i;
				else a[i][j]=j;
			}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
