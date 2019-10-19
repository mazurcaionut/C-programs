/*13.	a) Sa se scrie o functie care primeste ca parametri un vector x cu maxim 100 de 
elemente numere naturale si un numar natural n reprezentand numarul de elemente din vector 
si citeste numarul n si elementele vectorului x. 
b) Sa se scrie o functie care primeste ca parametri un vector x cu maxim 100 de elemente 
numere naturale si un numar natural n reprezentând numarul de elemente din vector. 
Functia calculeaza si returneaza suma obtinuta adunând ultima cifra din fiecare element al vectorului x. 
c) Folosind functiile de mai sus sa se citeasca un vector si sa se afiseze valoarea obtinuta prin 
adunarea ultimei cifre din fiecare element al vectorului. */

#include<iostream>
using namespace std;

int x[100],n;

void citire(int x[100],int &n)
{
	int i;
	cout<<"n=";cin>>n;
	for(i=1;i<=n;i++)
		cin>>x[i];
}

int suma(int x[100],int n)
{
	int i,s=0,u;
	for(i=1;i<=n;i++)
		{
			u=x[i]%10;
			s=s+u;
		}
	return s;
}

int main()
{
	citire(x,n);
	cout<<suma(x,n);
	return 0;
}
