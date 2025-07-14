// 27918. 탁구 경기

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d = 0, p = 0;
    cin >> n;
    while (n--)
    {
        char str;
        cin >> str;

        if (d - p >= 2 || p - d >= 2)
            break;
        if (str == 'D')
            ++d;
        else
            ++p;
    }
    printf("%d:%d", d, p);
}