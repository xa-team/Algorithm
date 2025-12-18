// 11725. 트리의 부모 찾기 (이진 트리로 구현)

#include <iostream>
#include <queue>
#include <vector>

using namespace std;
vector<int> parent;

void BFS(vector<int> arrayList[])
{
    queue<int> q;
    q.push(1);

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        for (int next : arrayList[cur])
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
    int n;
    cin >> n;

    vector<int> arrayList[n + 1];
    parent.assign(n + 1, 0);
    parent[1] = 1;
    for (int i = 0; i < n - 1; ++i)
    {
        int a, b;
        cin >> a >> b;
        arrayList[a].push_back(b);
        arrayList[b].push_back(a);
    }

    BFS(arrayList);

    for (int i = 2; i <= n; ++i)
    {
        cout << parent[i] << "\n";
    }
}