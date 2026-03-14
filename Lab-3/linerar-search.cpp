#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n,q;

    cout<<"Input size = ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);


    }
    cout<<"Enter target value : ";
    cin>>q;

    for(int i=0;i<n;i++)
    {

        if(v[i]==q)
        {
            cout<<"Found "<<endl;
            return 0;
        }


    }




    cout<<"Not Found ";
}
