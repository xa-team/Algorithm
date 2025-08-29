// 10813. 공 바꾸기

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> baskets;
    for (int i = 1; i <= n; ++i)
        baskets.push_back(i);

    while (m-- > 0)
    {
        int a, b;
        cin >> a >> b;

        swap(baskets[a - 1], baskets[b - 1]);
    }

    for (int i : baskets)
        cout << i << " ";
}