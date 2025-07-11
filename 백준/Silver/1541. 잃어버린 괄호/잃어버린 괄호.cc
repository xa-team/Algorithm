// 1541. 잃어버린 괄호

#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)

int main()
{
    fastio;
    string expression;
    cin >> expression;

    bool hasNegative = false;
    int sum = 0;
    string numStr = "";

    for (char ch : expression)
    {
        if (ch == '-' || ch == '+') // 연산자일 경우
        {
            int num = stoi(numStr);
            sum += hasNegative ? -num : num;
            numStr = "";

            if (ch == '-')
                hasNegative = true;
        }
        else
        {
            numStr += ch;
        }
    }

    int lastnum = stoi(numStr);
    sum += hasNegative ? -lastnum : lastnum;

    cout << sum;
}