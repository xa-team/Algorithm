// 15650. N과 M(2)

#include <algorithm>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

vector<vector<bool>> visited;
int parent[9];
int N, M;

void DFS(int current, int cnt)
{
    parent[cnt] = current;
    if (cnt < M)
    {
        for (int next = current + 1; next <= N; ++next)
        {
            DFS(next, cnt + 1);
        }
    }
    else
    {
        for (int i = 1; i <= M; ++i)
            cout << parent[i] << ' ';
        cout << endl;
    }
}

int main()
{
    cin >> N >> M;
    for (int i = 1; i <= N - M + 1; ++i)
    {
        DFS(i, 1);
    }
}