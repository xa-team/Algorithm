// 17626. Four Squares

#include <bits/stdc++.h>
using namespace std;

vector<int> DP(50001, 0);

void setDPtable(int target)
{
    DP[1] = 1;
    for (int i = 1; i <= target; ++i)
        DP[i] = DP[i - 1] + 1;
    for (int i = 2; i * i <= target; ++i)
        DP[i * i] = 1;

    for (int i = 2; i <= target; ++i)
    {
        for (int j = 1; j * j <= i; ++j)
        {
            DP[i] = min(DP[i - (j * j)] + 1, DP[i]);
        }
    }
}

int main()
{
    int n;
    cin >> n;

    setDPtable(n);

    cout << DP[n];
}