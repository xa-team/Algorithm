// 2606. 바이러스

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int BFS(vector<vector<int>> graph, int n)
{
    bool visited[n + 1] = {false};
    queue<int> q;
    int count = 0;

    visited[1] = true;
    q.push(1);

    while (q.size() > 0)
    {
        int current = q.front();
        q.pop();

        for (int neighbor : graph[current])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                count++;
                q.push(neighbor);
            }
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> graph(n + 1);

    int edges;
    cin >> edges;

    for (int i = 0; i < edges; i++)
    {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    cout << BFS(graph, n);
}