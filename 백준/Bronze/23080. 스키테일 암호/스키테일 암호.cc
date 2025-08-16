// 23080. 스키테일 암호

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    string str;
    cin >> k;
    cin >> str;

    int cnt = 0;
    for (auto it = str.begin(); it != str.end(); ++it)
    {
        if (cnt % k == 0)
        {
            cout << *it;
            cnt = 0;
        }
        cnt++;
    }
}