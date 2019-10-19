#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v47_3.txt");

int n,v[200],i,k,a,ok,u,go=1;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	cout<<"k=";cin>>k;
	for(i=1;i<=n;i++)
	{
		a=v[i];ok=1;
		while(a && ok)
		{
			u=a%10;
			if(u==k) 
			{
				ok=0;
				go=0;
			}
			a=a/10;
		}
		if(ok==0) cout<<v[i]<<" ";
	}
	if(go==1) cout<<"NU";
	return 0;
}
