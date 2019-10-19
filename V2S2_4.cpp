#include<iostream>
using namespace std;

int s,i,j,a[200][200],n,k;

int main()
{
	cout<<"n=";cin>>n;
	cout<<"k=";cin>>k;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	s=0;
	for(j=1;j<=n;j++)
		if(a[k][j]%2!=0) s=s+a[k][j];
	cout<<s;
	return 0;
}
