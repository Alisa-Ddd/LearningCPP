//inversarea oridinii elementelor din vector
//a[0],a[1],a[2],a[3],a[4],a[5] ; a[0] sa fie inversat cu a[5], a[1] cu a[4]
#include<iostream>
using namespace std;

int main()
{
    int n,i,a[10],aux;

    cout<<"dati numarul de elemente ale vectorului: "; cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]=";cin>>a[i];
    }

    for(i=0;i<n/2;i++)
    {
        aux=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=aux;
    }

    for(i=0;i<n;i++)
    {
        cout<<"vectorul inversat este:"<<a[i]<<endl;
    }

    return 0;
}