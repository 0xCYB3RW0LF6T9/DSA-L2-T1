#include<iostream>
using namespace std;

int main()
{
    int a[100];
    int l,index,val;
    cout<<"Enter your limit = ";
    cin>>l;
    cout<<"Enter array elements : ";
    for(int i=0; i<l; i++)
    {

        cin>>a[i];
    }
    cout<<"Enter value and index = ";
    cin>>val>>index;
    for(int i=l-1; i>=index; i--)
    {
        a[i+1]=a[i];

    }
    a[index]=val;
    l=l+1;
    for(int i=0; i<l; i++)
    {

        cout<<a[i]<<" ";
    }
}
