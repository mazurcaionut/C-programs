#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v36_5.txt");

int n,v[200],i,j;
long c;

int cifra(int a)
{
	int ok=1,u;
	while(a && ok)
	{
		u=a%10;
		if(u%2==0) 
		{
			return u;
			ok=0;
		}
		a=a/10;
	}
	if(ok==1) return -1;
}

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=8;i>=0;i=i-2)
		for(j=1;j<=n;j++)
			if(cifra(v[j])==i) c=c*10+i;
	cout<<c;		
	return 0;
}
