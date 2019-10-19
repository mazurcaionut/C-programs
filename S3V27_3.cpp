#include<iostream>
using namespace std;

int x,y;

float nreal(int x,int y)
{
	float nr;
	int a,p=1;
	a=y;
	nr=x;
	while(a)
	{
		p=p*10;
		a=a/10;
	}
	nr=nr*p+y;
	nr=nr/p;
	return nr;
}

int main()
{
	cout<<"x=";cin>>x;
	cout<<"y=";cin>>y;
	cout<<nreal(x,y);
	return 0;
}
