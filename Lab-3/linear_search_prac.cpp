#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int>v;
    int l;
    bool found= false;
    cout<<"Enter limit : ";
    cin>>l;
    for(int i=0;i<l;i++)
    {
        int n;
        cout<<"Enter element = ";
        cin>>n;
        v.push_back(n);



    }
    for(int i=0;i<l;i++)
    {
        if(v[i]==v[i+1])
        {

            found=true;

        }


    }


    if(found==true)
    {
        cout<<"Duplicate available ";
    }
    else{
        cout<<"No duplicate available";
    }



}


