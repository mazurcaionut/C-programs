#include<iostream>
using namespace std;

int x[100],n,i;

void impar(int x[100],int n)
{
	int i,ok=1;
	for(i=1;i<=n && ok;i++)
		if(x[i]%2!=0) ok=0;
	if(ok==0) cout<<"DA";
	else cout<<"NU";
}

int main()
{
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>x[i];
	impar(x,n);
	return 0;
}
