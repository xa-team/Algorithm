// 32775. 가희와 4시간의 벽 1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a <= b)
        cout << "high speed rail";
    else
        cout << "flight";
}