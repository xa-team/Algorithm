// 2798. 블랙잭

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> v(n);

    for (auto &n : v)
    {
        cin >> n;
    }
    sort(v.begin(), v.end());
    int max = 0;
    for (auto it1 = v.begin(); it1 != v.end() - 2; it1++)
    {
        for (auto it2 = it1 + 1; it2 != v.end() - 1; it2++)
        {
            for (auto it3 = it2 + 1; it3 != v.end(); it3++)
            {
                int sum = *it1 + *it2 + *it3;
                if (sum <= m && sum > max)
                    max = sum;
            }
        }
    }
    cout << max;
}