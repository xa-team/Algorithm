// 14652. 나는 행복합니다

#include <iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int cnt = -1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            ++cnt;
            if (cnt == k)
                printf("%d %d", i, j);
        }
    }
}