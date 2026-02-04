#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>>a;
    int row,col,v;
    int min=INT_MAX;
    int max=INT_MIN;

    cout<<"Enter row and column = ";
    cin>>row>>col;
    for(int i=0; i<row; i++)
    {
        vector<int>b;
        for(int j=0; j<col; j++)
        {
            cout<<"Enter vector element = ";
            cin>>v;
            b.push_back(v);
        }
        a.push_back(b);

    }
    for(int i=0; i<row; i++ )


    //highest from 2D vector
    for(int i=0; i<row; i++ )
    {
        for(int j=0; j<col; j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
    }
//Lowest from 2D vector
    for(int i=0; i<row; i++ )
    {
        for(int j=0; j<col; j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
    }

//printing
 for(int i=0; i<row; i++ )
    {
        for(int j=0; j<col; j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";

    }


cout<<"Highest = "<<max;
cout<<"Lowest = "<<min;

}
