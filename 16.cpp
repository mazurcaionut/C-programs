/*16.	Scrieti o functie care sa calculeze si sa returneze numarul de 
divizori primi ai unui numar natural n primit ca parametru*/

#include<iostream>
using namespace std;

int n;

int div_prim(int n)
{
	int nr=0,i,j,ok;
	if(n%2==0) nr++;
	for(i=3;i<=n;i=i+2)
		if(n%i==0)
		{
			ok=1;
			for(j=2;j<=i/2 && ok;j++)
				if(i%j==0) ok=0;
			if(ok==1) nr++;
		}
	return nr;
}

int main()
{
	cout<<"n=";cin>>n;
	cout<<div_prim(n);
	return 0;
}
