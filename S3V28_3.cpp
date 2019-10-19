#include<iostream>
using namespace std;

int n,v[200],i,s=0,nr=0;

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>v[i];
	for(i=1;i<=n;i++)
		s=s+v[i];
	for(i=1;i<=n;i++)
		if(v[i]==(s-v[i])/(n-1)) nr++;
	cout<<nr;
	return 0;
}
