// 11725. 트리의 부모 찾기
#include <iostream>
#include <queue>
#include <vector>

using namespace std;
vector<int> parent;
vector<int> adj[100001];
void BFS()
{
    queue<int> q;
    q.push(1);
    parent[1] = 1;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int next : adj[cur])
        {
            if (parent[next] == 0)
            {
                parent[next] = cur;
                q.push(next);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    parent.assign(n + 1, 0);

    for (int i = 0; i < n - 1; ++i)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    BFS();

    for (int i = 2; i <= n; ++i)
    {
        cout << parent[i] << "\n";
    }
}