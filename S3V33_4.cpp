#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v33_4.txt");

int n,m,x[200],i,s;

int main()
{
	f>>n>>m;
	for(i=1;i<=n;i++)
		f>>x[i];
	for(i=n;i>n-m;i--)
		s=s+x[i];
	cout<<s;
	return 0;
}
