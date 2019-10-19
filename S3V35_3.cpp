#include<iostream>
using namespace std;

int n,v[200],i,y[200],j,aux;

int sum(int x)
{
	int i,s=0;
	for(i=2;i<=x/2;i++)
		if(x%i==0) s=s+i;
	return s;
}

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>v[i];
	for(i=1;i<=n;i++)
		y[i]=sum(v[i]);
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			if(y[j]<y[i])
			{
				aux=y[i];
				y[i]=y[j];
				y[j]=aux;
			}
	for(i=1;i<=n;i++)
		cout<<y[i]<<" ";
	return 0;
}
