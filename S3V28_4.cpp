#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v28_4.txt");

int n,v[200],i,u,j,ok;

int primul(int a)
{
	int i,ok=1;
	for(i=2;i<=a/2 && ok;i++)
		if(a%i==0)
		{
			return i;
			ok=0;
		}
	if(ok==1) return a;
}

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=1;i<=n;i++)
	{
		ok=1;
		u=v[i]/primul(v[i]);
		for(j=2;j<=u/2 && ok;j++)
			if(u%j==0) ok=0;
		if(ok==1) cout<<v[i]<<" ";
	}
	return 0;
}
