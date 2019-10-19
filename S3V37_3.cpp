#include<iostream>
using namespace std;

int n,k,v[200],i,aux;

int main()
{
	cout<<"n=";cin>>n;
	cout<<"k=";cin>>k;
	for(i=1;i<=n;i++)
		cin>>v[i];
	do{
		aux=v[1];
		for(i=2;i<=n;i++)
			v[i-1]=v[i];
		v[n]=aux;
		k--;
	}while(k);
	for(i=1;i<=n;i++)
		cout<<v[i]<<" ";
	return 0;
}
