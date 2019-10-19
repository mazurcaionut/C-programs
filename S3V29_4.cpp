#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v29_4.txt");

int n,m,A[200],B[200],i,j=1,p=1,ok=1;

int suma(int A[200],int i,int j)
{
	int s=0,a;
	for(a=i;a<=j;a++)
		s=s+A[a];
	return s;
}

int main()
{
	f>>n>>m;
	for(i=1;i<=n;i++)
		f>>A[i];
	for(i=1;i<=m;i++)
		f>>B[i];
	for(i=1;i<=m && ok;i++)
		{
			while(B[i]!=suma(A,j,p) && p<n)
			{
				p++;
			}
			if(B[i]!=suma(A,j,p)) ok=0;
			p++;
			j=p;
		}
	if(ok==1) cout<<"DA";
	else cout<<"NU";
	return 0;
}
