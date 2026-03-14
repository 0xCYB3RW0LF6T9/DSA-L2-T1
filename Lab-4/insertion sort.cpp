

#include<iostream>
using namespace std;

int main()
{

    int a[190];
    int l;


    cout<<"Enter limit : ";
    cin>>l;
    for(int i=0; i<l; i++)
    {

        cin>>a[i];


    }

    for(int i=1;i<l;i++)
    {
        int t=a[i];
        int j=i-1;
        while(j>=0 && t<a[j])
        {
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=t;


    }
    for(int i=0; i<l; i++)
    {

     cout<<a[i];


    }


    }

