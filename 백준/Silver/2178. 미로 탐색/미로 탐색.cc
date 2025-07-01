// 2178. 미로탐색

#include <bits/stdc++.h>
using namespace std;

int n, m;

const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};

int BFS(vector<vector<int>> &graph)
{
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    queue<pair<int, int>> q;

    q.push({0, 0});
    visited[0][0] = true;
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx >= 0 && ny >= 0 && nx < m && ny < n && graph[ny][nx] == 1 && !visited[ny][nx])
            {
                visited[ny][nx] = true;
                graph[ny][nx] = graph[y][x] + 1;
                q.push({nx, ny});
            }
        }
    }

    return graph[n - 1][m - 1];
}

int main()
{
    cin >> n >> m;

    vector<vector<int>> graph(n, vector<int>(m));

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;

        for (int j = 0; j < m; ++j)
            graph[i][j] = str[j] - '0';
    }

    cout << BFS(graph);
}