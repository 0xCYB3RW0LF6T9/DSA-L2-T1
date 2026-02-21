#include<iostream>
using namespace std;

int main()
{

    int lowest=99999;
    int a[100],x,l;
    cout<<"Enter array limit : ";
    cin>>l;
    for(int i=0;i<l;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<l;i++)
    {
        if(a[i]<lowest)
        {
            lowest=a[i];
            x=i;
        }

    }
    cout<<"Lowest :"<<lowest<<"\nIndex : "<<x+1<<endl;

}
