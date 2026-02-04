#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int l;
    cout<<"Enter your limit = ";
    cin>>l;
    cout<<"Enter array elements : ";
    for(int i=0;i<l;i++)
    {

        cin>>a[i];
    }
    for(int i=0;i<l;i++)
    {

        cout<<a[i]<<"\n";
    }

}
