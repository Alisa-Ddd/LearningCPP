//determinarea numarului maxim dintr-un vector
#include<iostream>
using namespace std;

int main()
{
    int vector[100], maxim,i,n;

    cout<<"dati numarul de elemente al vectorului: "; cin>>n;

    //citim elementele vectorului
    for(i=0;i<n;i++)
    {
        cout<<"vector["<<i<<"]="; cin>>vector[i];
    }

    //initializam valoarea maxima cu primul element al vectorului
    maxim=vector[0];

    for(i=1;i<n;i++)
    {
        if(vector[i]>maxim)
            maxim=vector[i];
    }

    cout<<"maximul este: "<<maxim;

    return 0;


}