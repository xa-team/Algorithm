// 1, 2, 3 더하기

#include <iostream>
#include <algorithm>

using namespace std;

void GetDPTable(int (&DP)[14])
{
    for (int i = 1; i < 11; ++i)
    {
        DP[i + 1] += DP[i];
        DP[i + 2] += DP[i];
        DP[i + 3] += DP[i];
    }
}

int main()
{
    int T;
    cin >> T;

    int DP[14] = {0};
    DP[1] = 1;
    DP[2] = 1;
    DP[3] = 1;

    GetDPTable(DP);

    while (T--)
    {
        int n;
        cin >> n;
        cout << DP[n] << '\n';
    }
}