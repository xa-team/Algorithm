// 2667. 단지번호붙이기

#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, -1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

vector<int> countByBFS(const vector<vector<int>> &graph, const vector<pair<int, int>> &start, int n)
{
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    queue<pair<int, int>> q;
    vector<int> apt;
    int aptComplexCnt = 0;
    for (auto p : start)
    {
        if (!visited[p.first][p.second])
        {
            int aptCnt = 1;
            aptComplexCnt++;
            q.push(p);
            visited[p.first][p.second] = true;
            while (!q.empty())
            {
                auto cur = q.front();
                q.pop();

                for (int dir = 0; dir < 4; ++dir)
                {
                    int nx = cur.second + dx[dir];
                    int ny = cur.first + dy[dir];
                    if (nx >= n || nx < 0 || ny >= n || ny < 0)
                        continue;
                    if (!visited[ny][nx] && graph[ny][nx] == 1)
                    {
                        aptCnt++;
                        visited[ny][nx] = true;
                        q.push(make_pair(ny, nx));
                    }
                }
            }
            apt.push_back(aptCnt);
        }
    }
    cout << aptComplexCnt << '\n';
    return apt;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n));
    vector<pair<int, int>> start;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        for (int j = 0; j < n; ++j)
        {
            int a = str[j] - '0';
            graph[i][j] = a;
            if (graph[i][j] == 1)
                start.push_back(make_pair(i, j));
        }
    }
    vector<int> apt = countByBFS(graph, start, n);
    sort(apt.begin(), apt.end());
    for (int i : apt)
    {
        cout << i << '\n';
    }
}