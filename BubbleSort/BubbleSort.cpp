#include<iostream>
using namespace std;

int main()
{
    int a[5]={5,9,3,7,2};
    int i,n,schimb,aux;

    n=5;

    do
    {
        schimb=0;
        for(i=0;i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
                schimb=1;
            }
        }
    } while (schimb);

    for (i=0;i<=n-1;i++)
        cout<<"vectorul ordonat este:"<<"a["<<i<<"]="<<a[i]<<endl;

    return 0;

}