#include<iostream>
using namespace std;

int n,a[200][200],i,j,c,p=1;


int main()
{
	cout<<"n=";cin>>n;
	while(n)
	{
		
		c=n%10;
		for(i=1;i<=4;i++)
			a[i][p]=c;
		p++;
		n=n/10;
	}
	for(i=1;i<=4;i++)
		{
			for(j=1;j<=4;j++)
				cout<<a[i][j]<<" ";
			cout<<"\n";
		}
	return 0;
}
