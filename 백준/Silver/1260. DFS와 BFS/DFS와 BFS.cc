// 1260. DFS와 BFS

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph(1001);
vector<bool> visitedDFS(1001, false);
void DFS(int node) 
{
    visitedDFS[node] = true;
    cout << node << ' ';

    for(int next : graph[node])
    {
        if(!visitedDFS[next])
            DFS(next);
    }
}

void BFS(int start, int n)
{
    vector<bool> visitedBFS(n+1, false);
    queue<int> q;

    visitedBFS[start] = true;
    q.push(start);
    cout << start << ' ';

    while(q.size() > 0)
    {
        int cur = q.front();
        q.pop();

        for(int neighbor : graph[cur])
        {
            if(!visitedBFS[neighbor])
            {
                visitedBFS[neighbor] = true;
                q.push(neighbor);
                cout << neighbor << ' ';
            }
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int n, m, v;
	cin >> n >> m >> v;

    while(m--)
    {
        int a, b;
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i = 1; i <= n; ++i)
        sort(graph[i].begin(), graph[i].end());

    DFS(v);
    cout << endl;
    BFS(v, n);
}