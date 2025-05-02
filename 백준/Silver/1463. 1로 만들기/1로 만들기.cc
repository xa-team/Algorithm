// 1463. 1로 만들기

#include <iostream>

using namespace std;

const int INF = 0x7fffffff;

int main()
{
    int n;
    cin >> n;
    int DP[n + 1];
    DP[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        int a = INF, b = INF, c = INF, result;
        if (i % 3 == 0)
            a = DP[i / 3] + 1;
        if (i % 2 == 0)
            b = DP[i / 2] + 1;
        c = DP[i - 1] + 1;
        result = min(a, b);
        result = min(result, c);
        DP[i] = result;
    }

    cout << DP[n];
}