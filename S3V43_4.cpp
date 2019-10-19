#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v43_4.txt");

int n,v[200],i,maxim,nr=0;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	maxim=v[1];
	for(i=2;i<=n;i++)
		if(maxim<v[i]) maxim=v[i];
	for(i=1;i<=n;i++)
		if(v[i]==maxim) nr++;
	cout<<maxim<<" "<<nr;
 	return 0;
}
