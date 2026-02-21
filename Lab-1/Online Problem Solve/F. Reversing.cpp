#include<iostream>
using namespace std;
int main()
{

    int a[100];
    int l;
    cout<<"Enter array Limit: ";
    cin>>l;
    cout<<"Enter array elements : ";
    for(int i=0;i<l;i++)
    {

        cin>>a[i];
    }
    for(int i=l-1;i>=0;i--)
    {
        cout<<a[i]<<" ";

    }
}
