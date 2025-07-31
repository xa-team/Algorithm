// 18111. 마인크래프트

#include <bits/stdc++.h>
using namespace std;

int n, m, b;

int getMinTime(const vector<vector<int>> graph, int targetHeight)
{
    int time = INT32_MAX, requireBlocks = 0, extraBlocks = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (graph[i][j] < targetHeight)
                requireBlocks += targetHeight - graph[i][j];
            else if (graph[i][j] > targetHeight)
                extraBlocks += graph[i][j] - targetHeight;
        }
    }
    if (b + extraBlocks >= requireBlocks)
    {
        time = (extraBlocks * 2) + requireBlocks;
    }
    return time;
}

int main()
{
    cin >> n >> m >> b;

    int maxHeight = 0, minHeight = 0;
    vector<vector<int>> graph(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            cin >> graph[i][j];
            maxHeight = max(maxHeight, graph[i][j]);
            minHeight = min(minHeight, graph[i][j]);
        }

    int minTime = INT32_MAX, resultHeight = -1;
    for (int i = minHeight; i <= maxHeight; ++i)
    {
        int tmp = getMinTime(graph, i);
        if (minTime >= tmp)
        {
            minTime = tmp;
            resultHeight = i;
        }
    }
    printf("%d %d", minTime, resultHeight);
}