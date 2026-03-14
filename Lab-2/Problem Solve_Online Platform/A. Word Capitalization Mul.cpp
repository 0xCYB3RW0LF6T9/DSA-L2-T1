#include<iostream>
using namespace std;
int main()
{
    string a[100];
    int l;
    cout<<"Enter limit = ";
    cin>>l;
    cout<<"Enter string = ";
    for(int i=0;i<l;i++)
    {
        cin>>a[i];


    }
    for(int i=0;i<l;i++)
    {
    a[i][0]=toupper(a[i][0]);

    }
for(int i=0;i<l;i++)
    {
        cout<<a[i]<<"\n";


    }


}
