// 14626. ISBN

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int starIndex; // *의 위치
    int sum = 0;
    cin >> str;

    for (int i = 0; i < 13; ++i)
    {
        if (str[i] == '*')
        {
            starIndex = i;
        }
        else
        {
            int digit = str[i] - '0';
            if (i % 2 == 0)
                sum += digit;
            else
                sum += 3 * digit;
        }
    }
    int weight = (starIndex % 2 == 0) ? 1 : 3;

    for (int x = 0; x <= 9; ++x)
    {
        if ((sum + x * weight) % 10 == 0)
        {
            cout << x;
            break;
        }
    }
}