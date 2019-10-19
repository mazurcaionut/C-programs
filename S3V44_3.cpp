#include<iostream>
#include<math.h>
using namespace std;

int n,v[200],i,nr=0;

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>v[i];
	for(i=1;i<=n;i++)
		if(float(sqrt(v[i]))==int(sqrt(v[i]))) nr++;
	cout<<nr;	
	return 0;
}
