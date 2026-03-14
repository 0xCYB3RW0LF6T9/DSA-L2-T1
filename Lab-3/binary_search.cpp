#include<bits/stdc++.h>
using namespace std;

int main()
{
vector<int>v;
    int n,q,i;

    cout<<"Input size = ";
    cin>>n;
    cout<<"Enter target : ";
    cin>>q;
    int start=0;
    int last= n-1;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);


    }
    while(start<=last)
    {
        int mid=(start+last)/2;
        if(v[mid]==q)
        {
            cout<<"Found";
            return 0;
        }
        else if(q>v[mid])
        {

            start=mid+1;

        }
        else{

            last=mid-1;
        }

    }













    }
