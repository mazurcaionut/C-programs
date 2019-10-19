/*20.	Sa se scrie o functie care primeste ca paramentru un numar natural n si returneaza 
cel mai mare divizor al lui n strict mai mic decat n. 
Folosind aceasta functie sa se determine numerele prime dintr-un interval [a,b].*/

#include<iostream>
using namespace std;

int a,b,i;

int divizor(int n)
{
	int i,ok=1;
	for(i=n/2;i>=2 && ok;i--)
		if(n%i==0) 
		{
			ok=0;	
			return i;
		}
	if(ok==1) return 1;
}

int main()
{
	cout<<"a=";cin>>a;
	cout<<"b=";cin>>b;
	for(i=a;i<=b;i++)
		if(divizor(i)==1) cout<<i<<" ";
	return 0;
}
