#include<iostream>
#include<fstream>
using namespace std;

int n,v[100],i,ok=1,j,go=1;

ifstream f("s3v40_3.txt");

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=1;i<n && go;i++)
		if(v[i]%2==0) 
		{
			for(j=i+1;j<=n && ok;j++)
				if(v[j]%2==0)
				{
					if(v[j]<v[i]) 
					{
						ok=0;
						go=0;
					}
					else ok=0;
				}	
		}
	if(go==0) cout<<"NU";
	else
	{
		for(i=1;i<n && go;i++)
			if(v[i]%2!=0) 
			{
				for(j=i+1;j<=n && ok;j++)
					if(v[j]%2!=0)
					{
						if(v[j]>v[i]) 
						{
							ok=0;
							go=0;
						}
						else ok=0;
					}	
			}
	}
	if(go==0) cout<<"NU";
	else cout<<"DA";
	return 0;
}
