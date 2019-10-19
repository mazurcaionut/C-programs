/*5. Se da o matrice cu n linii si m coloane si elemente numere naturale. 
Sa se determine câte elemente din matrice au toti vecinii numere pare.*/

#include<iostream>
using namespace std;

int n,m,i,j,a[200][200],s=0;

int main()
{
	cout<<"n=";cin>>n;
	cout<<"m=";cin>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			cin>>a[i][j];
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
			if(a[i-1][j-1]%2==0 && a[i-1][j]%2==0 && a[i-1][j+1]%2==0 && a[i][j-1]%2==0 && a[i-1][j+1]%2==0 && a[i+1][j-1] && a[i+1][j]%2==0 && a[i+1][j+1]%2==0) s=s+1;
	cout<<s; 
	return 0;
}
