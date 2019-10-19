#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v37_4.txt");

int i,n,v[200];

int div(int x)
{
	int nr=0,d=2;
	while(x>1)
	{
		if(x%d==0)
		{
			while(x%d==0)
			{
				x=x/d;
			}
			nr++;	
		}
		else d++;
	}
	return nr; 
}

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=1;i<=n;i++)
		cout<<div(v[i])<<" ";
	return 0;
}
