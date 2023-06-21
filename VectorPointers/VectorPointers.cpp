#include<iostream>
using namespace std;

int main()
{
    //se considera sirul de maxim 99 de elemente:
    char s[19]="ala bala portocala";//18 caractere
    int lungime;//,count=0;

    //sa se determine lungimea efectiva a sirului de caractere s
    //pentru lungime=0, daca s[0] este diferit caracterul null ('\0'), fa ceva, apoi incrementam lungime cu 1 => lungime=1
    for(lungime=0; s[lungime]; lungime++); //adaugarea lui ; inlocuieste empty {} ca sa nu execute coutul de mai jos in loopul asta
    
    cout<<lungime<<"\n";

    //metoda 2 cu pointeri
    char *p;
    int lungime2,count=0;
    
    //pentru p=&s[0] adica p este adresa primului element din tablou
    //in momentul asta p este adresa primului element adica &s[0] si intreaba el, daca valoarea ce se afla la adresa &s[0], adica s[0], adica *p
    //fa ceva in acel for
    //incrementeaza adresa si du-te la urmatoarea adresa din memorie, adica &s[0]+1
    for(p=s; *p; p++) 
    {
        count++;
    }

    cout<<"addresa primului element din s este: "<<&s<<"\n";
    cout<<"addresa ultimului element p este: "<<&p<<"\n";

    cout<<"primului element din s este: "<<s<<"\n";
    cout<<"ultimului element p este: "<<p<<"\n";

    //memory address of p =0xe1cffffa78 and memory addres of s =0xe1cffffa80
    //diferenta lor este 18
    //-.- nu inteleg exact de ce s-a folosit o asemene a metoda, diferenta e defapt -18
    lungime2=p-s;
    cout<<lungime2<<"\n";
    cout<<"adresa lungimii "<<&lungime2<<"\n";
    return 0;
}