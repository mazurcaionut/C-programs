#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v46_3.txt");

int n,v[200],i,k,a[200],c=0,j,nr;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	cout<<"k=";cin>>k;
	for(i=1;i<=n;i++)
		{
			nr=2;
			for(j=2;j<=v[i]/2;j++)
				if(v[i]%j==0) nr++;
			if(nr>=k) cout<<v[i]<<" ";	
		}
	return 0;
}
