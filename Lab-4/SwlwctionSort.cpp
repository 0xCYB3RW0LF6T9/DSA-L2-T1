
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

    for(int i=0; i<l; i++)
    {
        int min=a[i];
        int k=i;
      for(int j=i; j<l; j++)
            if(a[j]<min)
            { min=a[j];
                k=j;
            }
            int temp=0;
            temp = a[k];
            a[k]=a[i];
            a[i]=temp;


        }
         for(int i=0; i<l; i++)
    {

        cout<<a[i];


    }




    }
