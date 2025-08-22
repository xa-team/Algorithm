// 9086. 문자열

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        string str;
        cin >> str;
        cout << *str.begin() << *(str.end() - 1) << '\n';
    }
}