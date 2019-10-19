/*14.	a) Cititi din fisierul mat.in o matrice a cu n linii si m coloane cu elemente intregi. 
b) Construiti un vector x care sa contina elementele de pe marginea matricii citite la punctul a. 
c) Ordonati crescator vectorul x. 
d) Plasati inapoi in matrice, pe margine elemntele din vectorul x, intai pe prima linie, 
apoi ultima coloana, ultima linie si prima coloana. 
e) Afisati in fisierul mat.out vectorul x si matricea astfel modificata. 
Pentru fiecare cerinta se va scrie o functie separata si nu se vor folosi variabile globale. 
Exemplu: 
pentru datele: 
4 5 
5 4 3 2 1 
1 2 3 4 5 
9 8 7 6 5 
1 2 3 4 5 
se afiseaza: 
1 1 1 2 2 3 3 4 4 5 5 5 5 9 
1 1 1 2 2 
9 2 3 4 3 
5 8 7 6 3 
5 5 5 4 4 */

#include<iostream>
#include<fstream>
using namespace std;

int p=0,n,m,a[200][200],x[100];

void citire(int a[200][200],int &n,int &m)
{
	ifstream f("mat.in");
	int i,j;
	f>>n>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			f>>a[i][j];
	f.close();
}

void constructie(int x[100],int a[200][200],int n,int m,int &p)
{
	int i;
	for(i=1;i<=m;i++)
	{
		p++;
		x[p]=a[1][i];
	}
	for(i=2;i<=n;i++)
	{
		p++;
		x[p]=a[i][m];
	}
	for(i=m-1;i>=1;i--)
	{
		p++;
		x[p]=a[n][i];
	}
	for(i=n-1;i>=2;i--)
	{
		p++;
		x[p]=a[i][1];
	}
}


void ordonare(int x[100],int p)
{
	int i,j,aux;
	for(i=1;i<=p;i++)
	{
		for(j=i+1;j<=p;j++)
			if(x[i]>x[j])
				{
					aux=x[i];
					x[i]=x[j];
					x[j]=aux;
				}
	}
}

void reconstructie(int a[200][200],int x[100],int n,int m)
{
	int i,j=0;
	for(i=1;i<=m;i++)
	{
		j++;
		a[1][i]=x[j];
	}
	for(i=2;i<=n;i++)
	{
		j++;
		a[i][m]=x[j];
	}
	for(i=m-1;i>=1;i--)
	{
		j++;
		a[n][i]=x[j];
	}
	for(i=n-1;i>=2;i--)
	{
		j++;
		a[i][1]=x[j];
	}
}

void afisare(int a[200][200],int x[100],int n,int m,int p)
{
	ofstream f("mat.out");
	int i,j;
	for(i=1;i<=p;i++)
		f<<x[i]<<" ";
	f<<endl;
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
				f<<a[i][j]<<" ";
			f<<endl;
		}
}

int main()
{
	citire(a,n,m);
	constructie(x,a,n,m,p);
	ordonare(x,p);
	reconstructie(a,x,n,m);
	afisare(a,x,n,m,p);
	return 0;
}
