// 1463. 1로 만들기

#include <iostream>
#include <vector>
#include <functional>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> DP(n + 1, 0);

    function<int(int)> TopDown = [&](int num) -> int
    {
        if (num <= 1)
            return 0;
        if (DP[num] != 0)
            return DP[num];
        int res = TopDown(num - 1) + 1;
        if (num % 2 == 0)
            res = min(res, TopDown(num / 2) + 1);
        if (num % 3 == 0)
            res = min(res, TopDown(num / 3) + 1);
        return DP[num] = res;
    };

    cout << TopDown(n);
}