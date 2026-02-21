#include<iostream>
using namespace std;
int main()
{

    int a[100];
    int l;
    int index=0;
    cout<<"Enter array Limit: ";
    cin>>l;
    cout<<"Enter array elements : ";
    for(int i=0; i<l; i++)
    {

        cin>>a[i];
    }
    for(int i = 0; i < l; i++)
    {
        if(a[i] != 0)
        {
            swap(a[i], a[index]);
            index++;
        }
    }
    for(int i=0; i<l; i++)
    {
        cout<<a[i];

    }
}
