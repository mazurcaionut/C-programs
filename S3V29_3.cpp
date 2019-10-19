#include<iostream>
using namespace std;

int a,b,c,nr=0,i=1;

int main()
{
	cout<<"a=";cin>>a;
	cout<<"b=";cin>>b;
	cout<<"c=";cin>>c;
	while(c*i<b)
	{
		if(c*i>=a) nr++;
		i++;
	}
	cout<<nr;
	return 0;
}
