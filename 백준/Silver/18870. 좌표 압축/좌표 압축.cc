//11870. 좌표 압축

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

    vector<pair<int, int>> coords(n); // (값, 원래 인덱스)
    for (int i = 0; i < n; ++i)
    {
        cin >> coords[i].first;
        coords[i].second = i;
    }

    sort(coords.begin(), coords.end());

    int compressedNum = 0;
    vector<int> result(n);
    result[coords[0].second] = 0;

    for (int i = 1; i < n; ++i)
    {
        if (coords[i].first != coords[i - 1].first)
            ++compressedNum;

        result[coords[i].second] = compressedNum;
    }

    for (int x : result)
    {
        cout << x << ' ';
    }
}
