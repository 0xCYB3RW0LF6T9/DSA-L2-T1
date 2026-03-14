#include<iostream>
#include<string>
using namespace std;

int main()
{
    string T="BAUSTUNI";
    string p="STU";
    int n1=T.length();
    int n2=p.length();


    for(int i=0;i<=n1-n2;i++)
    {    int c=0;
        for(int j =0;j<n2;j++)
        {
            if(p[j]==T[i+j])
            {
                c=c+1;//successful

            }

        }
        if(c==n2)
        {
            cout<<"pattern Found ";
            break;
        }

    }



}
