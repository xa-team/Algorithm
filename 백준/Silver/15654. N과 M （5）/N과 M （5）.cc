// 15654. N과 M(5)

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N, M;
int numList[8];
int arr[8];

void DFS(int start, int cur, int cnt)
{
    arr[cnt - 1] = cur;

    if (cnt == M)
    {
        for (int i = 0; i < M; ++i)
            cout << arr[i] << ' ';
        cout << "\n";
        return;
    }
    else
    {
        for (int i = 0; i < N; ++i)
            if (count(arr, arr + cnt, numList[i]) == 0)
                DFS(start, numList[i], cnt + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;

    for (int i = 0; i < N; ++i)
        cin >> numList[i];

    sort(numList, numList + N);

    for (int i = 0; i < N; ++i)
    {
        DFS(numList[i], numList[i], 1);
    }
}