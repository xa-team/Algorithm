// 2953. 나는 요리사다

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int maxSum = 0;
    int winner;
    for (int i = 0; i < 5; ++i)
    {
        int sum = 0;
        for (int j = 0; j < 4; ++j)
        {
            int n;
            cin >> n;
            sum += n;
        }
        if (maxSum < sum)
        {
            maxSum = sum;
            winner = i + 1;
        }
    }
    printf("%d %d", winner, maxSum);
}
