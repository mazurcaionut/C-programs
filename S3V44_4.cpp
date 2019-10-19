#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v44_4.txt");

int n,v[200],i,nr,j,a[200],c=0,l,aux;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=1;i<=n;i++)
		{
			nr=1;
			for(j=i+1;j<=n;j++)
				if(v[j]==v[i]) nr++;
			if(nr>=2)
			{
				c++;
				a[c]=v[i];
			}						
		}
	for(i=1;i<c;i++)
		for(j=i+1;j<=c;j++)
			if(a[i]==a[j])
			{
				for(l=j;l<c;l++)
				{
					a[l]=a[l+1];	
				}
				c--;
				j--;
			} 
	for(i=1;i<c;i++)
		for(j=i+1;j<=c;j++)
			if(a[j]<a[i])
			{
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
	for(i=1;i<=c;i++)
		cout<<a[i]<<" ";
	return 0;
}

