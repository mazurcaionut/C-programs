#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v34_3.txt");

int n,x[200],i;

int cifre_impare(int n)
{
	int ok=1,u;
	while(n && ok)
	{
		u=n%10;
		if(u%2==0) ok=0;
		n=n/10;
	}
	if(ok==1) return 1;
	else return 0;
}

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>x[i];
	for(i=1;i<=n;i++)
		if(x[i]>100 && cifre_impare(x[i])==1) cout<<x[i]<<" "; 
	return 0;
}
