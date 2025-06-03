// 31009. 진주로 가자

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int money, sum = 0;
    vector<int> fees;
    while (n--)
    {
        string str;
        int fee;
        cin >> str >> fee;
        if (str == "jinju")
        {
            money = fee;
        }
        else
        {
            fees.push_back(fee);
        }
    }
    for (auto it = fees.begin(); it != fees.end(); ++it)
    {
        if (*it > money)
            ++sum;
    }
    cout << money << '\n' << sum;
}