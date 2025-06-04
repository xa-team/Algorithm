// 27433. 팩토리얼 2

#include <bits/stdc++.h>
using namespace std;

long long factorial(int n)
{
    if (n == 0)
        return 1;
    return 1LL * n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << factorial(n);
}