// 9375. 패션왕 신해빈

#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)

int main()
{
    fastio;

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        map<string, int> clothes;
        while (n--)
        {
            string name, part;
            cin >> name >> part;

            if (clothes.find(part) == clothes.end())
                clothes.insert(make_pair(part, 1));
            else
                clothes[part]++;
        }

        int total;
        if (clothes.size() > 1)
        {
            total = 1;
            for (auto p : clothes)
                total *= p.second + 1;
            total -= 1;
        }
        else
        {
            total = 0;
            for (auto p : clothes)
                total += p.second;
        }

        cout << total << '\n';
    }
}