#include<iostream>
using namespace std;

int v[100],n,i,j,g;

int suma(int v[100],int n,int i,int j)
{
	int a,s=0;
	for(a=i;a<=j;a++)
		s=s+v[a];
	return s;
}

int main()
{
	cout<<"n=";cin>>n;
	cout<<"i=";cin>>i;
	cout<<"j=";cin>>j;
	for(g=1;g<=n;g++)
		cin>>v[g];
	cout<<suma(v,n,i,j);
	return 0;
}
