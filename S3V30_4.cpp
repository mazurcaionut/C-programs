#include<iostream>
#include<fstream>
using namespace std;

int n,i,s,nr,j;
float v[100];

ifstream f("s3v30_4.txt");

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	s=n;
	for(i=1;i<=n;i++)
		{
			nr=0;
			for(j=i+1;j<=n;j++)
				if(v[i]==v[j]) nr++;
			s=s-nr;		
		}
	cout<<s;
	return 0;
}
