// 10026. 적록색약

#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, -1, 1};

void DFS_B(int x, int y, int n, const vector<vector<char>> &graph, vector<vector<bool>> &visited)
{
    queue<pair<int, int>> q;

    visited[y][x] = true;
    q.push({x, y});
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = dx[dir] + x;
            int ny = dy[dir] + y;

            if (nx < n && nx >= 0 && ny < n && ny >= 0 && !visited[ny][nx] && graph[ny][nx] == 'B')
            {
                visited[ny][nx] = true;
                q.push({nx, ny});
            }
        }
    }
}
void DFS_R(int x, int y, int n, const vector<vector<char>> &graph, vector<vector<bool>> &visited)
{
    queue<pair<int, int>> q;

    visited[y][x] = true;
    q.push({x, y});
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = dx[dir] + x;
            int ny = dy[dir] + y;

            if (nx < n && nx >= 0 && ny < n && ny >= 0 && !visited[ny][nx] && graph[ny][nx] == 'R')
            {
                visited[ny][nx] = true;
                q.push({nx, ny});
            }
        }
    }
}
void DFS_G(int x, int y, int n, const vector<vector<char>> &graph, vector<vector<bool>> &visited)
{
    queue<pair<int, int>> q;

    visited[y][x] = true;
    q.push({x, y});
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = dx[dir] + x;
            int ny = dy[dir] + y;

            if (nx < n && nx >= 0 && ny < n && ny >= 0 && !visited[ny][nx] && graph[ny][nx] == 'G')
            {
                visited[ny][nx] = true;
                q.push({nx, ny});
            }
        }
    }
}
void DFS_RG(int x, int y, int n, const vector<vector<char>> &graph, vector<vector<bool>> &visited)
{
    queue<pair<int, int>> q;

    visited[y][x] = true;
    q.push({x, y});
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = dx[dir] + x;
            int ny = dy[dir] + y;

            if (nx < n && nx >= 0 && ny < n && ny >= 0 && !visited[ny][nx] &&
                (graph[ny][nx] == 'R' || graph[ny][nx] == 'G'))
            {
                visited[ny][nx] = true;
                q.push({nx, ny});
            }
        }
    }
}

int floodfill(int n, bool isColorweakness, const vector<vector<char>> &graph, vector<vector<bool>> &visited)
{
    int size = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (!visited[i][j] && graph[i][j] == 'B')
            {
                size++;
                DFS_B(j, i, n, graph, visited);
            }
        }
    }

    if (isColorweakness)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (!visited[i][j] && (graph[i][j] == 'R' || graph[i][j] == 'G'))
                {
                    size++;
                    DFS_RG(j, i, n, graph, visited);
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (!visited[i][j] && graph[i][j] == 'R')
                {
                    size++;
                    DFS_R(j, i, n, graph, visited);
                }
            }
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (!visited[i][j] && graph[i][j] == 'G')
                {
                    size++;
                    DFS_G(j, i, n, graph, visited);
                }
            }
        }
    }

    return size;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<char>> drawing(n, vector<char>(n));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> drawing[i][j];

    vector<vector<bool>> visitedColorweakness(n, vector<bool>(n, false));
    vector<vector<bool>> visitedNormal(n, vector<bool>(n, false));

    int areaSizeNormal = 0, areaSizeColorweakness = 0;
    areaSizeColorweakness = floodfill(n, true, drawing, visitedColorweakness);
    areaSizeNormal = floodfill(n, false, drawing, visitedNormal);

    cout << areaSizeNormal << " " << areaSizeColorweakness;
}