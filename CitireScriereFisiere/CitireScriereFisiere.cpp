//Scrieti un program care citeste din fisierul de intrare nr.in un numar natural n (0<n<=100) si apoi n valori intregi (mai mici in valoare absoluta decat 2*10^9)
//si afiseaza in fisierul de iesire nr.out o pereche de valori sub forma (nrmin,nrmax), unde nrmin este cea mai mica, iar nrmax cea mai mare valoare citita.
//Verificati la citire toate erorile care pot aparea la introducerea datelor si returnati coduri de eroare pentru fiecare eroare identificata.
#include<limits>
#include<fstream>
#include<iostream>
#define LIM 2000000000
using namespace std;
//new change
int main()
{
    int n,i,nrmin,nrmax,x;
    ifstream fin("C:\\Users\\cring\\OneDrive\\Documents\\Programare\\LearningCPP\\CitireScriereFisiere\\nrin.txt");
    ofstream fout("C:\\Users\\cring\\OneDrive\\Documents\\Programare\\LearningCPP\\CitireScriereFisiere\\nrout.txt");

    //if the file is not succesfully opened, give an error message and return 1
    //!fin este identic cu !fin.good sau fin.bad sau fin.fail 
    if(!fin.good()) 
    {
        cout<<"Eroare la deschiderea fisierului nr.in\n";
        return 1;
    }

     if(!fout.good()) 
    {
        cout<<"Eroare la crearea fisierului nr.in\n";
        return 1;
    }
    // >> este operator de citire ; citim n din fisierul de intrare (fisierul citit)
    fin>>n;

    //daca rezultatul lui fin.good negat, adica good nu este good sau n este mai mare ca 100 sau mai mic ca 0
    if(!fin.good() || n>100 || n<0)
    {
        //cred ca mai corect spus ar fi ca numarul de valori nu este n -.-
        cout<<"Numarul de valori este incorect\n";
        return 2;
    }

    //citesc prima valoare din fisier, prima din cele n valori intregi
    //imagineaza-l ca pe un cin>>x;
    fin>>x; 

    //daca fisierul nu se poate deschide
    if(!fin.good() || x>LIM || x<-LIM)
    {
        cout<<"Eroare la citirea valorilor\n";
        return 3;
        
    }
    
    //nrmin si nrmax primeste prima valoare citita din cele n, adica x, considerand ca prima valoare poate fi si minimul si maximul
    nrmin=nrmax=x;

    //citesc cele n valori din fisierul de intrare/citire
    for(i=1;i<n;i++)
    {
        fin>>x;

        //daca valoarea citita nu este intre limite si avem eroare la citirea din fisier, returnam un cod de eroare, decis mai sus ca 3
        if(!fin.good() || x>LIM || x<-LIM)
        {
            cout<<"Eroare la citirea valorilor\n";
            return 3;
        }

        //daca valoarea citita x este mai mica decat minimul, atunci minimul se intiializeaza cu valoarea citita x la pasul i
        if(x<nrmin) nrmin=x;
        else
        //daca valoarea citita x este mai mare decat maximul, aatunci maximul se intializeaza cu valoarea citita x la pasul i
        if(x>nrmax) nrmax=x;

    }

    //scriem in fisier minimul si maximul sub forma (nrmin,nrmax)
    fout<<'('<<nrmin<<", "<<nrmax<<")\n";
    
    //inchidem fisierul
    fout.close();
    fin.close();

    return 0;
    
}
//trebuie neaparat pus un enter la final ca sa il marcheze ca eof()