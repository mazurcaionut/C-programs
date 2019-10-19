#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v42_4.txt");

int n,v[200],i,ok=1;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=1;i<=n && ok;i++)
		if(v[i+1]<v[i]) ok=0;
	if(ok==1) cout<<"DA";
	else cout<<"NU";	
	return 0;
}
