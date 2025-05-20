// 1012. 유기농 배추

#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void BFS(const vector<vector<int>> &graph, vector<vector<bool>> &visited, int width, int height, int x, int y);

void makeGraph(vector<vector<int>> &graph, int k)
{
    for (int i = 0; i < k; ++i)
    {
        int x, y;
        cin >> x >> y;
        graph[y][x] = 1;
    }
}

int countCabbage(const vector<vector<int>> &graph, vector<vector<bool>> &visited, int width, int height)
{
    int count = 0;
    for (int y = 0; y < height; ++y)
    {
        for (int x = 0; x < width; ++x)
        {
            if (graph[y][x] == 1 && visited[y][x] == false)
            {
                BFS(graph, visited, width, height, x, y);
                ++count;
            }
        }
    }
    return count;
}

void BFS(const vector<vector<int>> &graph, vector<vector<bool>> &visited, int width, int height, int startX, int startY)
{
    queue<pair<int, int>> q;
    int count = 0;

    q.push({startX, startY});
    visited[startY][startX] = true;

    while (!q.empty())
    {
        auto current = q.front();
        q.pop();

        for (int dir = 0; dir < 4; ++dir)
        {
            int nx = current.first + dx[dir];
            int ny = current.second + dy[dir];

            if (nx < 0 || ny < 0 || nx >= width || ny >= height)
                continue;
            if (graph[ny][nx] != 1 || visited[ny][nx])
                continue;

            visited[ny][nx] = true;
            q.push({nx, ny});
        }
    }
}

int main()
{
    int T, width, height, k;

    cin >> T;
    while (T--)
    {
        cin >> width >> height >> k;

        vector<vector<int>> graph(height, vector<int>(width, 0));
        vector<vector<bool>> visited(height, vector<bool>(width, false));

        makeGraph(graph, k);
        cout << countCabbage(graph, visited, width, height) << '\n';
    }
}