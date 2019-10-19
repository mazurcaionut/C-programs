/*3. Se da o matrice cu n linii si m coloane si elemente numere naturale. 
Sa se determine câte linii ale matricei au toate elementele egale.*/

#include<iostream>
using namespace std;

int n,m,i,j,a[200][200],s=0,b,ok;

int main()
{
	cout<<"n=";cin>>n;
	cout<<"m=";cin>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>a[i][j];
	for(i=1;i<=n;i++)
		{
			b=a[i][1];ok=1;
			for(j=2;j<=m && ok;j++)
				if(a[i][j]!=b) ok=0;
			if(ok==1) s++;
		}
	cout<<s;
	return 0;
}
