// 11403. 경로 찾기

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> BFS(vector<vector<int>> &graph, int n)
{
    vector<vector<int>> result(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i)
    {
        queue<int> q;
        q.push(i);

        while (!q.empty())
        {
            int cur = q.front();
            q.pop();

            for (int neighbor : graph[cur])
            {
                if (result[i][neighbor] == 0)
                {
                    result[i][neighbor] = 1;
                    q.push(neighbor);
                }
            }
        }
    }

    return result;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> graph(n);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int a;
            cin >> a;
            if (a == 1)
                graph[i].push_back(j);
        }
    }
    vector<vector<int>> result = BFS(graph, n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << result[i][j] << " ";
        cout << "\n";
    }
}