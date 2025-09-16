// 27065. 2022년이 아름다웠던 이유

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<int> DP(5001, 0);

    for (int i = 2; i < 5001; ++i)
    {
        int sum = 0;
        bool flag = true;

        for (int j = 1; j < i; ++j)
        {
            if (i % j == 0)
            {
                sum += j;
                if (DP[j])
                {
                    flag = false;
                }
            }
        }
        if (sum > i)
        {
            if (flag)
            {
                DP[i] = 2;
            }
            else
            {
                DP[i] = 1;
            }
        }
    }

    while (t-- > 0)
    {
        int a;
        cin >> a;
        if (DP[a] == 2)
            cout << "Good Bye\n";
        else
            cout << "BOJ 2022\n";
    }
}