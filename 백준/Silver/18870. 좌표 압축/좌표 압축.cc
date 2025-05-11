// 18870. 좌표압축

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        v.push_back({num, i});
    }

    sort(v.begin(), v.end());

    int index = 0;
    int preNum = v[0].first;
    v[0].first = 0;
    for (auto it = v.begin() + 1; it != v.end(); ++it)
    {
        if (preNum != it->first)
        {
            preNum = it->first;
            it->first = ++index;
        }
        else
        {
            it->first = index;
        }
    }
    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
         { return a.second < b.second; });

    for (int i = 0; i < n; ++i)
    {
        cout << v[i].first << ' ';
    }
}