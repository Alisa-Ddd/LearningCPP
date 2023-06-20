#include <iostream>
using namespace std;

int main()
{
    int i=10,*p;

    //lui p i se atribuie referinta lui i, adica pozitia in memorie a numarului 10
    p=&i;

    //afisam continutul zonei de memorie &i in a carei adresa este memorata, adica valoarea 10
    cout<<*p<<"\n";

    //afisam zona de memorie, adica adresa variabilei &i
    cout<<p<<"\n";

    //marimea lui int
    cout<<sizeof(p)<<"\n";

    //incrementarea cu 4 a adresei de memorie, adica de la 0x845e7ffb44 ajunge la 0x845e7ffb48
    p++;
    //afisam zona de memorie a variabilei &i, dar incrementata cu 4
    cout<<p<<"\n";

    //formula de incrementare este new_address=current_address+(sizeof(data_type)*1)
    p=p+1;
    //deci rezultatul aici daca plecam de la 0x265a7ffe78 ar fi new_address=0x265a7ffe78 + sizeof(int)*1=> new_address=0x265a7ffe78 + 4*1, care in hexa
    //ar fi mutare cu 4 pozitii de la 79,7a,7b,7c, deci new_address=0x265a7ffe7c
    cout<<p<<"\n";

    p=p-1;
    //deci rezultatul aici daca plecam de la 0x445e7ff71c ar fi new_address=0x445e7ff71c + sizeof(int)*1=> new_address=0x445e7ff71c + 4*1, care in hexa
    //ar fi mutare cu 4 pozitii de la 1b,1a,19,18 deci new_address=0x445e7ff718
    cout<<p<<"\n";  

     return 0;
}

