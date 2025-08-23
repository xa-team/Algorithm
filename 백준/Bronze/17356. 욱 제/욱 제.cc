// 17356. 욱 제

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;

    long double m = (b - a) / 400;
    cout << 1 / (1 + pow(10, m));
}