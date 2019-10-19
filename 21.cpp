/*21.	Sa se scrie o functie interval care primeste 3 parametri n, a, b numere intregi. 
Functia determina un interval (a,b) de lungime minima cu proprietatea ca n apartine intervalului 
(a,b) si ca a si b sunt numere prime. 
Capetele intervalului vor fi returnate prin intermediul parametrilor a si b. */

#include<iostream>
using namespace std;

int a,b,n;

void interval(int n,int &a,int &b)
{
	int ok=1,i,go=1;
	a=n-1;
	while(ok)
	{
		go=1;
		for(i=2;i<=a/2 && go;i++)
			if(a%i==0) go=0;
		if(go==1) ok=0;
		else a--;
	}
	ok=1;
	b=n+1;
	while(ok)
	{
		go=1;
		for(i=2;i<=b/2 && go;i++)
			if(b%i==0) go=0;
		if(go==1) ok=0;
		else b++;
	}
}

int main()
{
	cout<<"n=";cin>>n;
	interval(n,a,b);
	cout<<"("<<a<<","<<b<<")";
	return 0;
}
