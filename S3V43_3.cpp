#include<iostream>
using namespace std;

int n,v[200],i,s=0;

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>v[i];
	for(i=1;i<=n;i++)
		if(v[i]%2!=0) s=s+v[i];
	cout<<s;
	return 0;
}
