/*Fisierul nrin.txt contine numere intregi, scise pe mai multe linii, numerele de pe aceeasi linie fiind separate prin spatii
Scrieti un program care sa numere cate valori sunt in fisier.
Exemplu Fisier
    51 30 9
    2 67
    3
*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin("C:\\Users\\cring\\OneDrive\\Documents\\Programare\\LearningCPP\\NumberCount\\nrin.txt");

//is_open testeaza daca fisierul a fost deschis cu success
    if(!fin.is_open())
    {
        cout<<"fisierul nu poate fi deschis";
        return 1;
    }

    int n,i=0;

//>> citeste numarul intreg fara spatii, iar get il citeste cu spatii
//daca am citit primul caracter
    while(fin>>n)
    {
        i++;
    }

    cout<<"numarul de valori din fisier este: "<<i<<endl;
    return 0;



}