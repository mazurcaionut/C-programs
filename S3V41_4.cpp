#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v41_4.txt");

int n,v[100],i,minim,maxim;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	minim=v[1];
	maxim=v[1];
	for(i=2;i<=n;i++)
		{
			if(minim>v[i]) minim=v[i];
			if(maxim<v[i]) maxim=v[i];
		}
	cout<<maxim<<" "<<minim;
	return 0;
}
