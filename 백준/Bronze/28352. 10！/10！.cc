// 28352. 10!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long anw = 6;
    for (int i = 11; i <= n; ++i)
        anw *= i;

    cout << anw;
}