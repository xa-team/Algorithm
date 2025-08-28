// 1267. 핸드폰 요금

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> pay;
    while (n-- > 0)
    {
        int a;
        cin >> a;
        pay.push_back(a);
    }

    int sum1 = 0, sum2 = 0;
    for (int time : pay)
    {
        sum1 += (time / 30 + 1) * 10;
        sum2 += (time / 60 + 1) * 15;
    }
    if (sum1 < sum2)
        cout << "Y " << sum1;
    else if (sum2 < sum1)
        cout << "M " << sum2;
    else
        cout << "Y M " << sum1;
}