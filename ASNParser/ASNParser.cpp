#include<iostream>
#include<libtasn1.h>
using namespace std();

int main()
{
    const char* filename = "ASNParser\\fakeparser.txt";
    FILE* file=fopen(filename,"rb");
    if(!file)
    {
        cout<<"Failed to open the ASN.1 file"<<endl;
        return 1;
    }

    asn1_
}
