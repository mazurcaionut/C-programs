#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v45_4.txt");

int n,v[200],i,j,l,aux;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++)
			if(v[j]==v[i])
			{
				for(l=j;l<n;l++)
					v[l]=v[l+1];
				n--;
				j--;
			}
	for(i=1;i<n;i++)
		for(j=i+1;j<=n;j++)
			if(v[j]<v[i])
			{
				aux=v[j];
				v[j]=v[i];
				v[i]=aux;
			}
	for(i=1;i<=n;i++)
		cout<<v[i]<<" ";
	return 0;
}
