#include<iostream>
using namespace std;

int y;
long x;

void Del(long &x,int y)
{
	int inv=0,u,p=1;
	while(x)
	{
		u=x%10;
		if(u<=y) 
		{
			inv=inv+u*p;
			p=p*10;
		}
		x=x/10;
	}
	x=inv;
}

int main()
{
	cout<<"x=";cin>>x;
	cout<<"y=";cin>>y;
	Del(x,y);
	cout<<"\n"<<x;
	return 0;
}
