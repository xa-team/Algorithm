// 32278. 선택 가능성이 가장 높은 자료형

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n <= SHRT_MAX && n >= SHRT_MIN)
        cout << "short";
    else if (n <= INT_MAX && n >= INT_MIN)
        cout << "int";
    else
        cout << "long long";
}