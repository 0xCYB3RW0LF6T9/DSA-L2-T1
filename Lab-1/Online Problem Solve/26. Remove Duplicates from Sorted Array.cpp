#include<iostream>
using namespace std;

int main() {
    int a[100], l;
    cout << "Enter array size: ";
    cin >> l;

    cout << "Enter array elements: ";
    for(int i = 0; i < l; i++)
        cin >> a[i];

    cout << "Array after removing adjacent duplicates: ";

    cout << a[0] << " ";

    for(int i = 1; i < l; i++) {
        if(a[i] != a[i-1])
            cout << a[i] << " ";
    }

    return 0;
}
