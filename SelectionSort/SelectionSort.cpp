//Fie vectorul a=[5,9,3,7,2], ordonati-l cu sortarea prin selectie
#include<iostream>
using namespace std;

int main()
{
    int a[5]={5,9,3,7,2};
    int dr,pozMax,Max,i,n;

    n=5;

    for(dr=n-1;dr>0;dr--)
    {
        //
        for(Max=a[0],pozMax=0,i=1;i<=dr;i++)
        {
            if(a[i]>Max)
            {
                Max=a[i];
                pozMax=i;
            }

        }
            a[pozMax]=a[dr];
            a[dr]=Max;
        
    }    

    for(i=0;i<n-1;i++)
    cout<<"vectorul ordonat este:"<<"a["<<i<<"]="<<a[i]<<endl;
    
    return 0;

}