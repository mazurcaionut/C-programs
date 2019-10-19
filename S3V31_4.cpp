#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v31_4.txt");

int n,x[200],y[200],i,minim,maxim;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>x[i]>>y[i];
	maxim=x[1];
	for(i=2;i<=n;i++)
		if(maxim<x[i]) maxim=x[i];
	minim=y[1];
	for(i=2;i<=n;i++)
		if(minim>y[i]) minim=y[i];
	if(minim<maxim) cout<<0;
	else cout<<maxim<<" "<<minim;
	return 0;
}
