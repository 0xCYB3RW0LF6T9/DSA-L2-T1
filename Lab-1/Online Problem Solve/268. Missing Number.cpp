#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int l;
    cout<<"Enter array limit : ";
    cin>>l;
    cout<<"Enter array element : ";
    for(int i=0 ; i<l; i++)
    {

        cin>>a[i];

    }

    int x=a[0];
    for(int i=0;i<l;i++)
    {
        if(a[i]==x)
        {
            x++;

        }
        else{

        }
    }



}
