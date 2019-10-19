/*22.	Sa se scrie o functie care primeste 3 parametri: n - numar natural, 
c1,c2 cifre si returneaza numarul obtinut din n prin inlocuirea tuturor aparitiilor cifrei c1 cu c2. 
Ex. din n=2324, c1=2 si c2=5 returneaza 5354*/

#include<iostream>
using namespace std;

int n,c1,c2;

int cifra(int n,int c1,int c2)
{
	int a=0,u,p=1;
	while(n)
	{
		u=n%10;
		if(u==c1) 
		{
			a=a+p*c2;
			p=p*10;
		}
		else 
		{
			a=a+p*u;
			p=p*10;
		}
		n=n/10;
	}
	return a;
}

int main()
{
	cout<<"n=";cin>>n;
	cout<<"c1=";cin>>c1;
	cout<<"c2=";cin>>c2;
	cout<<cifra(n,c1,c2);
	return 0;
}
