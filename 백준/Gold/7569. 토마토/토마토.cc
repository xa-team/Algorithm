// 7569. 토마토

#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int unripeCount;
int ripedCount;
queue<tuple<int, int, int>> q;
vector<vector<vector<int>>> graph;

int BFS(int m, int n, int h)
{
    int dx[6] = {-1, 1, 0, 0, 0, 0};
    int dy[6] = {0, 0, -1, 1, 0, 0};
    int dz[6] = {0, 0, 0, 0, -1, 1};
    int day = -1;

    while (!q.empty())
    {
        int queueSize = q.size();
        ++day;

        for (int i = 0; i < queueSize; ++i)
        {
            auto [z, y, x] = q.front();
            q.pop();

            for (int dir = 0; dir < 6; ++dir)
            {
                int nx = x + dx[dir];
                int ny = y + dy[dir];
                int nz = z + dz[dir];

                if (nx < 0 || ny < 0 || nz < 0 || nx >= m || ny >= n || nz >= h)
                    continue;
                if (graph[nz][ny][nx] != 0)
                    continue;

                graph[nz][ny][nx] = 1;
                q.push({nz, ny, nx});
                ripedCount++;
            }
        }
    }

    return day;
}

int main()
{
    int m, n, h; // m : 가로 길이, n : 세로 길이, h : 높이
    cin >> m >> n >> h;

    unripeCount = 0;

    graph.resize(h);
    for (int i = 0; i < h; ++i)
    {
        graph[i].resize(n);
        for (int j = 0; j < n; ++j)
        {
            graph[i][j].resize(m);
        }
    }

    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < m; ++k)
            {
                int tmp;
                cin >> tmp;
                graph[i][j][k] = tmp;
                if (tmp == 1)
                {
                    q.push({i, j, k});
                }
                else if (tmp == 0)
                {
                    unripeCount++;
                }
            }
        }
    }

    int day = BFS(m, n, h);
    cout << (ripedCount == unripeCount ? day : -1);
}