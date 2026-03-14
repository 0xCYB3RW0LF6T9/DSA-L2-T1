#include<iostream>
using namespace std;

int main()
{
    string p="ABCD";
    string q="XYZ";
    char c[10];

    int i=0,j=0;


    while(i!=4)
    {
        c[i]=p[i];
        i=i+1;
    }
    while(j!=3)
    {
        c[i]=q[j];
        j+=1;
        i+=1;
    }
    c[i]='\0';

    cout<<c;


}



