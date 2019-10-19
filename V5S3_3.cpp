#include<iostream>
#include<fstream>
using namespace std;

ofstream f("v5s3_3.txt");

long int n,p=1,a,pref,v[100],c=0,i,j,aux;

int main()
{
	cout<<"n=";cin>>n;
	a=n;
	while(a)
	{
		p=p*10;
		a=a/10;
	}
	p=p/10;
	a=n;
	do{
		pref=n/p;
		if(pref!=0) 
		{
			c++;
			v[c]=pref;
		}
		p=p/10;
	}while(pref!=a);
	for(i=1;i<=c;i++)
		for(j=i+1;j<=c;j++)
			if(v[i]<v[j])
			{
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
	for(i=1;i<=c;i++)
		f<<v[i]<<" ";
	return 0;
}
