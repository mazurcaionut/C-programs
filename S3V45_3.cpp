#include<iostream>
using namespace std;

int n,i,nr,c=0,j;
float v[200],a[200];

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>v[i];
	for(i=1;i<n;i++)
		{
			nr=0;
			for(j=1;j<=n;j++)
				if(v[j]==v[i]) nr++;
			if(nr==1)
			{
				c++;
				a[c]=v[i];
			} 	
		}
	for(i=1;i<=c;i++)
		cout<<a[i]<<" ";
	return 0;
}
