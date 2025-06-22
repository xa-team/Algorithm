// 25628. 햄버거 만들기

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a / 2 <= b)
    {
        cout << a / 2;
    }
    else
    {
        cout << b;
    }
}
