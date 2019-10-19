#include<iostream>
#include<fstream>
using namespace std;

ifstream f("s3v32_4.txt");

int x,maxim,ok=1,v[200],n=0,i,l,maxim2;

int main()
{
	while(f>>x)
	{
		n++;
		v[n]=x;
	}
	for(i=1;i<=n && ok;i++)
		if(v[i]%2==0)
		{
			maxim=v[i];
			l=i;
			ok=0;
		}
	maxim2=maxim;
	for(i=l;i<=n;i++)
		if(v[i]%2==0 && maxim<v[i]) maxim=v[i];
	for(i=l;i<=n;i++)
		if(v[i]%2==0 && maxim2<v[i] && v[i]<maxim) maxim2=v[i];
	cout<<maxim2<<" "<<maxim;
	return 0;
}
