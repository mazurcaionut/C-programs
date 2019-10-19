#include<iostream>
using namespace std;

int n,v[100],i;

int f(int a)
{
	int i,j,ok=1,go=1,k;
	for(i=2;i<=a && go;i++)
		if(a%i==0)
		{
			for(j=2;j<=i/2 && ok;j++)
				if(i%j==0) ok=0;
			if(ok==1) 
			{
				go=0;
				k=i;
			}
		}
	return k;
}


int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>v[i];
	for(i=1;i<=n;i++)
		if(f(v[i])==v[i]) cout<<v[i]<<" ";
	return 0;
}
