// 2630. 색종이 만들기

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> table(128, vector<int>(128, 0));
vector<int> colorCount(2, 0);

void DivideAndConquer(int n, int x, int y)
{
    int color = table[x][y];
    bool isOk = true;
    for (int i = x; i < x + n; ++i)
    {
        for (int j = y; j < y + n; ++j)
        {
            if (table[i][j] != color)
            {
                isOk = false;
                break;
            }
        }
        if (!isOk)
            break;
    }

    if (isOk)
    {
        colorCount[color]++;
        return;
    }

    int half = n / 2;
    DivideAndConquer(half, x, y);               // 왼쪽 위
    DivideAndConquer(half, x, y + half);        // 왼쪽 아래
    DivideAndConquer(half, x + half, y);        // 오른쪽 위
    DivideAndConquer(half, x + half, y + half); // 오른쪽 아래
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cin >> table[i][j];
    }

    DivideAndConquer(n, 0, 0);
    cout << colorCount[0] << '\n'
         << colorCount[1] << '\n';
}