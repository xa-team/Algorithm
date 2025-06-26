#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        if (str.length() >= 6 && str.length() <= 9)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}