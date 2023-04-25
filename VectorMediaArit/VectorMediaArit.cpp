//Media aritmetica a elementelor strict pozitive
#include<iostream>
using namespace std;

int main()
{
    int n,i,a[100],suma=0,count=0;

    cout<<"dati numarul de elemente ale vectorului: "; cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]="; cin>>a[i];
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            suma=suma+a[i];
            count++;

        }

    }

    cout<<"media aritmetica a elementelor strict pozitive este: "<<suma/count;

return 0;
}