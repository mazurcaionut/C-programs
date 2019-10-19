#include<iostream>
#include<math.h>
using namespace std;

int n,i;

int pr(int x)
{
	int i,ok=1;
	for(i=2;i<=x/2 && ok;i++)
		if(x%i==0) ok=0;
	if(ok==0) return 0;
	else return 1;
}

int div(int y)
{
	int s,i;
	s=1+abs(y);
	for(i=2;i<=y/2;i++)
		if(y%i==0) s=s+i;
	return s;
}

int main()
{
	cout<<"n=";cin>>n;
	for(i=2;i<=n;i++)
		if(pr(div(i))==1) cout<<i<<" ";
	return 0;
}
