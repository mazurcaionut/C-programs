/*2. Se da o matrice cu n linii si m coloane si elemente numere naturale. 
Sa se determine câte dintre elementele situate pe linii cu indici pari sunt prime.*/

#include<iostream>
using namespace std;

int n,m,i,j,a[200][200],l,ok,c=0;


int main()
{
	cout<<"n=";cin>>n;
	cout<<"m=";cin>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>a[i][j];
	for(i=2;i<=n;i=i+2)
		for(j=1;j<=m;j++)
			{
				ok=1;
				for(l=2;l<=a[i][j]/2 && ok;l++)
					if(a[i][j]%l==0) ok=0;
				if(ok==1) c++;
			}
	cout<<c;
	return 0;
}
