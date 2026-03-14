#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>a;
    string b;
    int l;
    cout<<"Enter Limit : ";
    cin>>l;
    cout<<"Enter your string : ";
    for(int i=0;i<l;i++)
    {
        cin>>b;
        a.push_back(b);

    }
    for(int i=a.size();i>0;i--)
    {
        cout<<a[i-1];
    }




}
