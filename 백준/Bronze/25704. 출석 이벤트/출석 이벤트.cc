// 25704. 출석 이벤트

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n, p;
    cin >> n >> p;

    if (n < 5)
        p = p;
    else if (n < 10)
        p -= 500;
    else if (n < 15)
        p = min(p * 0.9, p - 500);
    else if (n < 20)
        p = min(p * 0.9, p - 2000);
    else
        p = min(p * 0.75, p - 2000);

    if (p < 0)
        p = 0;
    cout << p;
}