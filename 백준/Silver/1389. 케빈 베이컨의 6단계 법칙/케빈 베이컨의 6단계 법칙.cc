// 1389. 케빈 베이컨의 6단계 법칙

#include <bits/stdc++.h>
using namespace std;
int n, m;

int getDistanceToMe(vector<vector<int>> graph, int start)
{
    vector<bool> visited(n + 1, false);
    visited[start] = true;

    queue<int> q;
    q.push(start);

    int sumDist = 0;
    vector<int> dist(n + 1, 0);

    while (!q.empty())
    {
        int front = q.front();
        q.pop();

        for (int i : graph[front])
        {
            if (!visited[i])
            {
                dist[i] = dist[front] + 1;
                sumDist += dist[i];
                q.push(i);
                visited[i] = true;
            }
        }
    }
    return sumDist;
}

int main()
{
    cin >> n >> m;

    vector<vector<int>> graph(n + 1, vector<int>());
    while (m-- > 0)
    {
        int i, j;
        cin >> i >> j;
        graph[i].push_back(j);
        graph[j].push_back(i);
    }

    vector<int> bacon(n + 1, 0);
    int minBacon = INT32_MAX, minNum = 0;
    for (int i = 1; i <= n; ++i)
    {
        bacon[i] = getDistanceToMe(graph, i);
        if (minBacon > bacon[i])
        {
            minNum = i;
            minBacon = bacon[i];
        }
    }
    cout << minNum;
}