#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>a;
    a.push_back(10);
    a.push_back(60);
    a.push_back(50);
    a.push_back(40);
    a.push_back(30);
    a.push_back(33);
    a.push_back(5);
    a.push_back(783);
    a.push_back(63);
    a.push_back(89);
    a.push_back(4);
    for(int i: a)
    {
    cout<<i<<" ";
    }
    int f,l,sum=0;
    cout<<"\nEnter first and last index for sum = ";
    cin>>f>>l;
    for(int i=f;i<=l;i++)
    {

        sum=sum+a[i];
    }
    cout<<"SUM = "<<sum;

}
