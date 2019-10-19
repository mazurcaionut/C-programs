#include<iostream>
using namespace std;

long n;

int pr(long a)
{
	int i,ok=1;
	for(i=2;i<=a/2 && ok;i++)
		if(a%i==0) ok=0;
	if(ok==1) return 1;
	else return 0;
}

int main()
{
	cout<<"n=";cin>>n;
	while(n>100)
	{
		n=n/10;
		if(pr(n)==1) cout<<n<<" ";
	}
	return 0;
}
