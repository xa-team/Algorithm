// 1541. 잃어버린 괄호

#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)

int main()
{
    string expression;
    cin >> expression;

    bool hasNegative = false;
    int sum = 0, num = 0;
    for (auto it = expression.begin(); it != expression.end(); ++it)
    {
        if (*it - '0' >= 0 && *it - '0' <= 9) // 숫자일 경우
        {
            int n = *it - '0';
            num = (num * 10) + n;
        }
        else
        {
            sum = hasNegative ? sum - num : sum + num;
            num = 0;

            if (*it == '-')
                hasNegative = true;
        }

        if (it + 1 == expression.end())
        {
            sum = hasNegative ? sum - num : sum + num;
        }
    }
    cout << sum;
}