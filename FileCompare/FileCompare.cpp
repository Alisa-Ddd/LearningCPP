//Scrieti un program care sa testeze daca doua fisiere denumite f1in.txt, respectiv f2in,txt sunt identice
#include<iostream>
#include<fstream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;


int main()
{

    ifstream f1("FileCompare\\f1in.txt");
    ifstream f2("FileCompare\\f2in.txt");

    if(!f1.is_open())
    {
        cout<<"Error opening first file: "<<endl;
        return 1;
    }

    if(!f2.is_open())
    {
        cout<<"Error opening second file: "<<endl;
        return 1;
    }

    int n1,n2;
    while (f1>>n1 && f2>>n2)
    {
        if(n1==n2)
        {
            cout<<"numerele sunt identice"<<endl;
            
        }
        else
        {
            cout<<"fisierele nu sunt identice, exit ";
            return 2;
        }

    }

    f1.close();
    f2.close();
    cout<<"fisierele sunt identice"<<endl;
    return 0;

}