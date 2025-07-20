// 5532. 방학 숙제

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float L, a, b, c, d;

    cin >> L >> a >> b >> c >> d;

    if (a / c > b / d)
    {
        cout << L - ceil(a / c);
    }
    else
    {
        cout << L - ceil(b / d);
    }
}