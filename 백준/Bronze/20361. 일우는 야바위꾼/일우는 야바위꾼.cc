// 20361. 일우는 야바위꾼

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x, k;
    cin >> n >> x >> k;

    vector<bool> cups(n + 1, false);
    cups[x] = true;
    while (k-- > 0)
    {
        int a, b;
        cin >> a >> b;

        bool tmp;
        swap(cups[a], cups[b]);
    }
    for (int i = 1; i <= n; ++i)
    {
        if (cups[i] == true)
            cout << i;
    }
}