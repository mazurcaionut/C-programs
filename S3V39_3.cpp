#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v39_3.txt");

int n,v[200],i,ok=1,go=1,p=1,j;

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=1;i<=n && go;i++)
		if(v[i]%2==0)
		{
			ok=1;
			for(j=i+1;j<=n && ok;j++)
				if(v[j]%2==0)
				{
					if(v[i]>v[j])
					{
						ok=0;
						go=0;
						p=0;
						cout<<"NU";
					}
					else ok=0;
				}
		}
	if(p==1) cout<<"DA";
	return 0;
}
