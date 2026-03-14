#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int v,l;
    cout<<"Enter limit : ";
    cin>>l;
    for(int i=0; i<l; i++)
    {

        cin>>a[i];


    }
    int temp=0;

    for(int i=0; i<l; i++)
    {
        for(int j=0; j<l-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }



    for(int i=0; i<l; i++)
    {

        cout<<a[i];
    }


}
