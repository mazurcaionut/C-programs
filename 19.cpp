/*19.	Sa se scrie o functie care primeste ca parametru un numar natural n si 
returneaza suma divizorilor primi ai lui n. 
Folosind aceasta functie sa se determine daca un numar natural x este prim. */

#include<iostream>
using namespace std;

int n;

int div_prim(int n)
{
	int s=0,i,j,ok;
	if(n%2==0) s=s+2;
	for(i=3;i<=n;i=i+2)
		if(n%i==0)
		{
			ok=1;
			for(j=2;j<=i/2 && ok;j++)
				if(i%j==0) ok=0;
			if(ok==1) s=s+i;
		}
	return s;
}

int main()
{
	cout<<"n=";cin>>n;
	if(div_prim(n)==n) cout<<"Da,este prim";
	else cout<<"Nu este prim";
	return 0;
}
