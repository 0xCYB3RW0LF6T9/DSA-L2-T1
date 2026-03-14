#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>a;
    int x,t;
    cin>>x;
    cin>>t;
    int d;
    for(int i=0; i<x; i++)
    {
        int k ;
        cin>>k;
        a.push_back(k);
    }
    int mid,max=x-1;
    min=0;
    while(min<=max)
    {
        mid=(max+min)/2;
        if(t==a[mid])
        {
            d=mid;
            return;

        }
        else if(a[mid]>t)
        {
            max=mid-1;
        }
        else
        {
            min=mid+1;
        }


    }

}



}
