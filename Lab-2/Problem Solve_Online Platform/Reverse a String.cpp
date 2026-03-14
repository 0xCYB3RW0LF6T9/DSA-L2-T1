#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int i = s.length() - 1;
    bool firstWord = true;

    while (i >= 0) {

        while (i >= 0 && s[i] == ' ') i--;

        if (i < 0) break;

        int end = i;


        while (i >= 0 && s[i] != ' ') i--;
        int start = i + 1;

        if (!firstWord) cout << " ";
        cout << s.substr(start, end - start + 1);
        firstWord = false;
    }

    cout << endl;
}
