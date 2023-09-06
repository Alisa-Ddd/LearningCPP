#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    //daca declari o variabila const, te obliga sa o initializez in momentul declararii
    //stored in the read only memory
    const char *s="ala bala";
    
    //lungimea sirului s
    cout<<"lungimea sirului s este: "<<strlen(s)<<"\n";

    //declararea unui vector cu o zona de memorie deja alocata
    char p[10];

    //copierea primelor 3 caractere din s, in destinatia p
    cout<<strncpy(p,s,3)<<"\n";

    //alocam un bloc de memorye de o marime fixa de 10 caractere
    //nu il putem declara ca un pointer pentru ca nu ar avea o memorie alocata sa stocheze stringul concatenat
    char h[20]="ushasha";

    //concatenereaza s la h
    cout<<strcat(h,s)<<"\n";

    char u[20]="zariana";

    //concatenare 3 caractere la alt sir
    cout<<strncat(u,s,3)<<"\n";

    const char* s1="well well well";
    const char* s2="what do we have here";

    cout<<strcmp(s1,s2)<<"\n";

    return 0;
    
}