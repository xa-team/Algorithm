// 16928. 뱀과 사다리 게임

#include <bits/stdc++.h>
using namespace std;

#define fastio cin.tie(0)->sync_with_stdio(0)

vector<int> gametable(101, 0);

int getMin()
{
    vector<int> dist(101, -1);
    queue<int> q;
    q.push(1);

    dist[1] = 0;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int i = 1; i <= 6 && cur + i <= 100; ++i)
        {
            if (gametable[cur + i] != 0)
            {
                if (dist[gametable[cur + i]] == -1)
                {
                    q.push(gametable[cur + i]);
                    dist[gametable[cur + i]] = dist[cur] + 1;
                }
            }
            else
            {
                if (dist[cur + i] == -1)
                {
                    q.push(cur + i);
                    dist[cur + i] = dist[cur] + 1;
                }
            }
        }
    }
    return dist[100];
}

int main()
{
    fastio;

    int n, m;
    cin >> n >> m;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        gametable[x] = y;
    }
    while (m--)
    {
        int u, v;
        cin >> u >> v;

        gametable[u] = v;
    }

    cout << getMin();
}