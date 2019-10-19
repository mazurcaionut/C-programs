#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v48_4.in");
ofstream g("s3v48_4.out");

int n,v[200],i,nr,a[200],c=0,j,aux;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=1;i<=n;i++)
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
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			if(a[j]<a[i])
			{
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
	for(i=1;i<=c;i++)
		g<<a[i]<<" ";	
	return 0;
}
