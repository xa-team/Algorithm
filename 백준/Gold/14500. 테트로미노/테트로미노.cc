// 14500. 테트로미노

#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)

vector<vector<int>> graph;
vector<vector<bool>> visited;

int n, m;
int maxSum = 0;
const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

void getMaxTetrominoByDFS(int x, int y, int depth, int sum)
{
    if (depth == 4)
    {
        maxSum = max(sum, maxSum);
        return;
    }

    for (int dir = 0; dir < 4; ++dir)
    {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 0 || nx >= m || ny < 0 || ny >= n)
            continue;
        if (visited[ny][nx])
            continue;

        visited[ny][nx] = true;
        getMaxTetrominoByDFS(nx, ny, depth + 1, sum + graph[ny][nx]);
        visited[ny][nx] = false;
    }
}

int getMaxTetrominoException(int x, int y)
{
    int center = graph[y][x];
    int sum = center;

    vector<int> v;

    for (int i = 0; i < 4; ++i)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || ny < 0 || nx >= m || ny >= n)
            continue;
        v.push_back(graph[ny][nx]);
        sum += graph[ny][nx];
    }

    if (v.size() < 3)
        return 0;
    if (v.size() == 3)
        return sum;

    int minElement = *min_element(v.begin(), v.end());
    return sum - minElement;
}

int main()
{
    cin >> n >> m;
    graph.assign(n, vector<int>(m));
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int tmp;
            cin >> tmp;
            graph[i][j] = tmp;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            visited[i][j] = true;
            getMaxTetrominoByDFS(j, i, 1, graph[i][j]);
            visited[i][j] = false;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (i >= 0 && i < n && j >= 0 && j < m)
                maxSum = max(maxSum, getMaxTetrominoException(j, i));
        }
    }
    cout << maxSum;
}