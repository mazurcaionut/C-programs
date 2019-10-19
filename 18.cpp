/*18.	Sa se scrie o functie care primeste ca paramentru un numar natural n cu cel putin 
2 cifre si cu cel mult 4 si returneaza numarul obtinut din prima si ultima cifra a lui n. 
Folosind acesta functie sa se determine daca un numar a are exact 2 cifre. */

#include<iostream>
using namespace std;

int n;

int numar(int n)
{
	int inv,u,l;
	u=n%10;
	while(n>10)
	{
		n=n/10;
	}
	inv=n*10+u;
	return inv;
}

int main()
{
	cout<<"n=";cin>>n;
	if(numar(n)==n) cout<<"Da,are exact 2 cifre.";
	else cout<<"Nu are 2 cifre.";
	return 0;
}
