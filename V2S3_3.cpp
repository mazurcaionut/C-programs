#include<iostream>
#include<fstream>
using namespace std;

ifstream f("v2s3_3.txt");

int n=0,i,v[100],x,j,aux;

int main()
{
	while(f>>x)
	{
		if(x>0) 
		{
			n++;
			v[n]=x;
		}
	}
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			if(v[i]>v[j])
			{
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
	for(i=1;i<=n;i++)
		cout<<v[i]<<" ";
	return 0;
}
