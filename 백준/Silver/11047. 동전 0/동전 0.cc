// 11047. 동전 0

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int coins[N];
    for (int i = 0; i < N; ++i)
        cin >> coins[i];

    int total = K;
    int index = N - 1;
    int count = 0;
    while (total > 0)
    {
        if (total - coins[index] >= 0)
        {
            count += (total / coins[index]);
            total %= coins[index];
        }
        else
        {
            --index;
        }
    }
    cout << count;
}