// 1100. 하얀 칸

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<char>> chess(8, vector<char>(8));

    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            char c;
            cin >> c;
            chess[i][j] = c;
        }
    }

    bool isWhite = true;
    int cnt = 0;
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (isWhite && chess[i][j] == 'F')
            {
                cnt++;
            }
            if (j == 7)
                continue;
            isWhite = !isWhite;
        }
    }
    cout << cnt;
}