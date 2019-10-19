#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v49_4.txt");

int maxim=0,x,s;

void cmax(int a,int &b)
{
	int u;
	b=a%10;
	while(a)
	{
		a=a/10;
		u=a%10;
		if(u>b) b=u;
	}
}

int main()
{
	while(f>>x)
	{
		cmax(x,s);
		if(s>maxim) maxim=s;
	}
	cout<<maxim; 
	return 0;
}
