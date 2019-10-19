#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v35_4.txt");

int n,v[200],i;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=1;i<=n;i++)
		if(v[i]>100 && v[i]<999 && v[i]%10!=v[i]/10%10 && v[i]%10!=v[i]/100 && v[i]/10%10!=v[i]/100) cout<<v[i]<<" ";
	return 0;
}
