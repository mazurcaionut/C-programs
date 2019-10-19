#include<iostream>
using namespace std;

int n,k,v[100],i,j,aux,s=0;

int main()
{
	cout<<"n=";cin>>n;
	cout<<"k=";cin>>k;
	for(i=1;i<=n;i++)
		cin>>v[i];
	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++)
			if(v[i]>v[j])
			{
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
	for(i=n-k+1;i<=n;i++)
		s=s+v[i];
	cout<<s;			
	return 0;
}
