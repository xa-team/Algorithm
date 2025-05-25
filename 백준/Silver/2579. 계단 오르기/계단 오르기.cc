//2579. 계단 오르기

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> stair(n+1);
    vector<int> DP(n+1);

    for(int i = 1; i <= n; ++i)
        cin >> stair[i];

    DP[1] = stair[1];
    if(n>=2)
        DP[2] = stair[1] + stair[2];

    for(int i = 3; i <= n; ++i)
    {
        DP[i] = max(DP[i-2] + stair[i], DP[i-3] + stair[i-1] + stair[i]);
    }
    cout << DP[n];
}