// 30007. 라면 공식

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n-- > 0)
    {
        int a, b, x;
        cin >> a >> b >> x;

        cout << a * (x - 1) + b << '\n';
    }
}