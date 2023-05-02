//fie vectorul [1,3,5,7,8,11,13], vrem sa aflam indexiul elementului 9
#include <iostream>
using namespace std;

int main()
{
    int v[7],n,i,st,dr,mij,x;

    cout<<"dati numarul de elemente n: "; cin>>n;
    cout<<"dati numarul ce sa il cautam in vector x: "; cin>>x;
    st=0;
    dr=n-1;
    for (i=0;i<n;i++)
    {
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }

//cat timp avem elemente
    while(st<=dr)
    {
        //calculam mijlocul vectorului
        mij=(st+dr)/2;
        if(x==v[mij])
        {
            cout<<"l-am gasit pe "<<x<<" pe pozitia "<<mij;
            break;
        }
        else if(x>v[mij])
        {
            st=mij+1;
        }
        else if(x<v[mij])
        {
            dr=mij-1;
        }
    }

    cout<<"x nu se gaseste in vector";


    return 0;
    

}