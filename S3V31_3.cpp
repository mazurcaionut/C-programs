#include<iostream>
using namespace std;

int x[100],n,i,j;

void ordonare(int x[100],int n)
{
	int i,j,aux;
	for(i=1;i<=n;i++)
		if(x[i]%2!=0)
			{
				for(j=i+1;j<=n;j++)
					if(x[j]%2!=0)
						if(x[j]<x[i])
						{
							aux=x[j];
							x[j]=x[i];
							x[i]=aux;
						}
			}
}

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>x[i];
	ordonare(x,n);
	for(i=1;i<=n;i++)
		cout<<x[i]<<" ";
	return 0;
}
