#include<iostream>
using namespace std;

int x,y;

void prime(int x,int y)
{
	int aux,i,j,ok;
	if(x>y)
	{
		aux=x;
		x=y;
		y=aux;
	}
	for(i=x;i<=y;i++)
		{
			ok=1;
			for(j=2;j<=i/2 && ok;j++)
				if(i%j==0) ok=0;
			if(ok==1) cout<<i<<" ";
		}
}

int main()
{
	cout<<"x=";cin>>x;
	cout<<"y=";cin>>y;
	prime(x,y);
	return 0;
}
