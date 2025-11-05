// 11727. 2 x n 타일링 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> DP(n + 1, 0);

    DP[1] = 1;
    DP[2] = 3;
    DP[3] = 5;

    for (int i = 4; i < n + 1; ++i)
    {
        DP[i] = (DP[i - 1] + 2 * DP[i - 2]) % 10007;
    }

    cout << DP[n];
}