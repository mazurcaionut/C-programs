#include<iostream>
#include<fstream>
using namespace std;

ifstream f("v1s3_3.txt");

int n,v[1000],i,ok=1,x;

int main()
{
	f>>n;
	while(f>>x)
		if(x%n==0) 
		{
			ok=0;
			cout<<x<<" ";
		}
	if(ok==1) cout<<"NU EXISTA";
	return 0;
}
