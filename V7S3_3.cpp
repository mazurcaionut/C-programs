#include<iostream>
using namespace std;

int n,i,aux,v[200];

int main()
{
    cout<<"n=";cin>>n;
    for(i=1;i<=3*n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
        {   aux=v[i];
            v[i]=v[2*n+i];
            v[2*n+i]=aux;
        }
    for(i=1;i<=3*n;i++)
        cout<<v[i]<<" ";
    return 0;
}
