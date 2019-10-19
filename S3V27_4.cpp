#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v27_4.txt");

int n,x,y,i;
float v[100];

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	x=v[1];
	y=v[1];
	for(i=1;i<=n;i++)
		{	
			if(v[i]<x) x=v[i];
			if(v[i]>y) y=v[i];
		}
	cout<<x<<" "<<y;
	return 0;
}
