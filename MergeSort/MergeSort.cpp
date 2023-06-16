#include<iostream>
using namespace std;

int main()
{
    int a[5]={5,9,3,7,2};
    int b[7]={11,2,9,2,3,2,5};
    int n=5,m=7,i,j,k;
    int c[12];

    for(i=j=k=0; i<n && j<m;)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];

    }
    for(; i<n;i++) c[k++]=a[i];
    for(; j<m;j++) c[k++]=b[j];

    for (i=0;i<)
}