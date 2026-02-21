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
    a.push_back(23);
    a.pop_back();
    a.insert(a.begin()+2,3);
    a.insert(a.begin()+1,40);
    a.insert(a.end()+0,100);


    for(int i=0;i<a.size();i++)
    {
          cout<<a[i ]<<" ";
    }


}
