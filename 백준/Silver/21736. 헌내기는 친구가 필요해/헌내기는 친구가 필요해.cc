// 21736. 헌내기는 친구가 필요해

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<vector<char>> graph;
vector<vector<bool>> visited;

int N, M;
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

int BFS(int startY, int startX)
{
    int sum = 0;

    queue<pair<int, int>> q;
    q.push({startY, startX});

    visited[startY][startX] = true;
    while (!q.empty())
    {
        auto cur = q.front();
        q.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = cur.second + dx[dir];
            int ny = cur.first + dy[dir];

            if (ny >= N || ny < 0 || nx >= M || nx < 0)
                continue;
            if (!visited[ny][nx])
            {
                if (graph[ny][nx] == 'P')
                    ++sum;

                visited[ny][nx] = true;
                q.push({ny, nx});
            }
        }
    }

    return sum;
}

int main()
{
    cin >> N >> M;
    graph.assign(N, vector<char>(M));
    visited.assign(N, vector<bool>(M, false));

    pair<int, int> startPoint;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            cin >> graph[i][j];

            if (graph[i][j] == 'I')
                startPoint = {i, j};
            else if (graph[i][j] == 'X')
                visited[i][j] = true;
        }
    }
    int result = BFS(startPoint.first, startPoint.second);
    cout << (result == 0 ? "TT" : to_string(result));
}