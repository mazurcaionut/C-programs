/*4. Se da o matrice cu n linii si m coloane si elemente numere naturale. 
Sa se determine câte coloane ale matricei au elementele distincte doua câte doua.*/

#include<iostream>
using namespace std;

int n,m,i,j,a[200][200],go,s=0,ok,l;

int main()
{
	cout<<"n=";cin>>n;
	cout<<"m=";cin>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>a[i][j];
	for(j=1;j<=m;j++)
		{
			go=1;
			for(i=1;i<=n && go;i++)
			{
				ok=1;
				for(l=1;l<=n && ok;l++)
					if(a[i][j]==a[l][j] && i!=l) ok=0;
				if(ok==0) go=0;  
			}
			if(go==1) s++;
		}
	cout<<s;
	return 0;
}
