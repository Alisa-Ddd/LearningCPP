//scrieti un program care sa numere cate linii contine fisierul text.txt
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    int i=0;
    char c;
    //string line;
    //citim fisierul NrLines
    ifstream fin("NrLines\\NrLines.txt");
    
    //testam ca putem sa deschidem fisierul
    if(!fin)
    {
        cout<<"fisierul nu a putut fi deschis"<<endl;;
        return 1;
    }
    /*varianta1 
    //cat timp avem linii in fisier si nu am ajuns la final
    while(getline(fin,line))*/
    while(fin.get(c))
    {
        if(c=='\n')
        //cand este citita o linie, maresc contorul
        i++;
    }

    cout<<"numarul de linii din fisier este:"<<i<<endl;

    return 0;
}