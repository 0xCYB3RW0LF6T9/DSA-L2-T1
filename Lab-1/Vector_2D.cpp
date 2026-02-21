#include<bits/stdc++.h>
using namespace std;


int main()
{

    vector <vector<int>> a;

    int v,l;
    cout<<"Enter limit : ";
    cin>>l;
    for(int i=0; i<l; i++)
    {
        vector<int>b;
        for(int j=0; j<l; j++)
        {
            cout<<"Enter value for array = ";
            cin>>v;
            b.push_back(v);
        }
            a.push_back(b);
   }

    for(int i=0; i<l; i++)
    {
        for(int j=0; j<l; j++)
        {

        cout<<a[i][j]<<" ";

        }
    cout<<"\n";


    }



}
