#include<iostream>
using namespace std;

int main()
{
    int row,col;
    int a[100][100];
    cout<<"Enter Row and Column = ";
    cin>>row>>col;
    cout<<"Enter Matrix Element = ";
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {

            cin>>a[i][j];
        }
    }

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {

            cout<<a[i][j]<<" ";
        }
    printf("\n");

    }


}
