#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v26_4.txt");

int n,v[100],i;

void sterge(int v[100],int &n,int &i)
{
	int j;
	for(j=i;j<n;j++)
		v[j]=v[j+1];
	n--;
	i--;
}

int main()
{
	f>>n;
	for(i=1;i<=n;i++)
		f>>v[i];
	for(i=2;i<=n;i++)
		if(v[i-1]==v[i]) 
		{
			sterge(v,n,i);
		}
	for(i=1;i<=n;i++)
		cout<<v[i]<<" ";	
	return 0;
}
