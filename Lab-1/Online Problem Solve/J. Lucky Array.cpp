#include<iostream>
using namespace std;

int main()
{

    int lowest=99999;
    int a[100],x,l;
    cout<<"Enter array limit : ";
    cin>>l;
    for(int i=0; i<l; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<l; i++)
    {
        if(a[i]<lowest)
        {
            lowest=a[i];
            x=i;
        }

    }
    int count=0;
    for(int i=0; i<l; i++)
    {
        if(a[i]==lowest)
        {
            count++;

        }
        else
        {
            continue;
        }
    }
    if(count%2==0)
    {
        cout<<"Lucky_Number\n";

    }
    else
    {
        cout<<"Unlucky Number\n";
    }
    cout<<"Count of minimum = "<<count<<endl;

}
