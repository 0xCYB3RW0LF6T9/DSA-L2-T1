#include<iostream>
using namespace std;

int main()
{
    int count = 0;
    string a;
    cin >> a;

    for(int i = 0; i < a.length(); i++)
    {
        bool isDistinct = true;

        for(int j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                isDistinct = false;
                break;
            }
        }

        if(isDistinct)
            count++;
    }

    if(count % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
