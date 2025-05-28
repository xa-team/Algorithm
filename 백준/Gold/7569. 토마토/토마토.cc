// 7569. 토마토

#include <bits/stdc++.h>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

const int dx[6] = {-1, 1, 0, 0, 0, 0};
const int dy[6] = {0, 0, -1, 1, 0, 0};
const int dz[6] = {0, 0, 0, 0, -1, 1};

int m, n, h; // m : 가로 길이, n : 세로 길이, h : 높이
vector<vector<vector<int>>> graph;
queue<tuple<int, int, int>> q;

int BFS(int totalUnripe)
{
    if (totalUnripe == 0)
        return 0;
    int day = -1, ripedCount = 0;

    while (!q.empty())
    {
        int qSize = q.size();
        ++day;

        for (int i = 0; i < qSize; ++i)
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
                ++ripedCount;
            }
        }
    }

    return (ripedCount == totalUnripe) ? day : -1;
}

int main()
{
    fastio;
    cin >> m >> n >> h;

    int totalUnripe = 0;

    graph.assign(h, vector<vector<int>>(n, vector<int>(m)));

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
                    ++totalUnripe;
                }
            }
        }
    }

    cout << BFS(totalUnripe);
}