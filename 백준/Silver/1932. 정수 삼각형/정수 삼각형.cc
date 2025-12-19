// 1932. 정수 삼각형

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));
    int DP[501];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j <= i; ++j)
            cin >> graph[i][j];

    for (int i = 0; i < n; ++i)
    {
        DP[i] = graph[n - 1][i];
    }
    for (int i = n - 2; i >= 0; --i)
    {
        for (int j = 0; j <= i; ++j)
        {
            DP[j] = graph[i][j] + max(DP[j], DP[j + 1]);
        }
    }
    cout << DP[0];
}