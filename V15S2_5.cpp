#include<iostream>
using namespace std;

int a[200][200],i,j,c,p=1;
long int n;

int main()
{
	cout<<"n=";cin>>n;
	while(n)
	{
		
		c=n%10;
		for(j=1;j<=5;j++)
			a[p][j]=c;
		p++;
		n=n/10;
	}
	for(i=1;i<=5;i++)
		{
			for(j=1;j<=5;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	return 0;
}
