//scrieti un program care sa numere cate linii contine fisierul text.txt
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int x;
    //citim fisierul NrLines
    ifstream fin("NrLines\\NrLines.cpp");
    
    //testam ca putem sa deschidem fisierul
    if(!fin)
    {
        cout<<"fisierul nu a putut fi deschis"<<endl;;
        return 1;
    }

    fin>>x;
    cout<<"primul integer din fisier este: "<<x<<endl;

    return 0;
}