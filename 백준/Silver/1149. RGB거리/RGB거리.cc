// 1149. RGB거리

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> street(n, vector<int>(3));
    vector<vector<int>> DP(n, vector<int>(3, 0));

    for (int i = 0; i < n; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        street[i][0] = a;
        street[i][1] = b;
        street[i][2] = c;
    }

    DP[0][0] = street[0][0];
    DP[0][1] = street[0][1];
    DP[0][2] = street[0][2];

    for (int i = 1; i < n; ++i)
    {
        DP[i][0] = street[i][0] + min(DP[i - 1][1], DP[i - 1][2]);
        DP[i][1] = street[i][1] + min(DP[i - 1][0], DP[i - 1][2]);
        DP[i][2] = street[i][2] + min(DP[i - 1][1], DP[i - 1][0]);
    }
    int minRGB = __INT64_MAX__;

    minRGB = min(min(DP[n - 1][0], DP[n - 1][1]), DP[n - 1][2]);
    cout << minRGB;
}