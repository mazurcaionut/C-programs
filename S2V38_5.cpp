#include<iostream>
using namespace std;

int n,a[200][200],i,j,p=1,minim;

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	for(i=1;i<=n;i++)
		{
			minim=a[1][n+1-i];
			for(j=2;j<=n;j++)
				if(minim>a[j][n+1-i]) minim=a[j][n+1-i];
			if(minim==a[i][n+1-i]) p=p*minim;
		}
	cout<<p;	

	return 0;
}
