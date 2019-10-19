#include<iostream>
using namespace std;

int n,v[100],i,ok=1;

int sub(int v[100],int n,int a)
{
	int i,nr=0;
	for(i=1;i<=n;i++)
		if(v[i]==a) nr++;
	return nr;
}

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>v[i];
	for(i=1;i<=n && ok;i++)
		if(sub(v,n,v[i])>1) ok=0;
	if(ok==1) cout<<"DA";
	else cout<<"NU";
	return 0;
}
