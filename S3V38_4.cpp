#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v38_4.txt");

int n,v[200],i,j;

void inter(int &x,int &y)
{
	x=x+y;
	y=x-y;
	x=x-y;
}

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			if(v[i]>v[j]) inter(v[i],v[j]);
	for(i=1;i<=n;i++)
		cout<<v[i]<<" ";		
	return 0;
}
