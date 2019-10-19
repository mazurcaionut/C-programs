#include<iostream>
using namespace std;

int n,k,i;

int main()
{
	cout<<"n=";cin>>n;
	cout<<"k=";cin>>k;
	for(i=k;i>=1;i--)
		cout<<n*i<<" ";
	return 0;
}
