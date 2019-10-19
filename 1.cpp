/*1. Se da o matrice cu n linii si m coloane si elemente numere naturale. 
Sa se determine suma elementelor de pe fiecare linie. */

#include<iostream>
using namespace std;

int n,m,a[200][200],i,j,s;

int main()
{
	cout<<"n=";cin>>n;
	cout<<"m=";cin>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>a[i][j];
	for(i=1;i<=n;i++)
	{
		s=0;
		for(j=1;j<=m;j++)
			s=s+a[i][j];
		cout<<s<<" ";
	}
	return 0;
}
