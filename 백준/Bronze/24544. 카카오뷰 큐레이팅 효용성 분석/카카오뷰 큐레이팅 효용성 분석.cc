// 24544. 카카오뷰 큐레이팅 효용성 분석

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> interest(n);

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int a;
            cin >> a;
            interest[j].push_back(a);
        }
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; ++i)
    {
        sum1 += interest[i][0];
        if (!interest[i][1])
            sum2 += interest[i][0];
    }
    cout << sum1 << "\n" << sum2;
    
}