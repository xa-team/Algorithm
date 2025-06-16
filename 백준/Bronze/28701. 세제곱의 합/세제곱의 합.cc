// 28701. 세제곱의 합

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 1; i <= n; ++i)
        sum1 += i;
    sum2 = sum1 * sum1;
    sum3 = sum2;
    cout << sum1 << '\n' << sum2 << '\n' << sum3;
}