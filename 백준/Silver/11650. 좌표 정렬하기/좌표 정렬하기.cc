// 11650. 좌표 정렬하기

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<vector<int>> coords(N, vector<int>(2));

    for (int i = 0; i < N; i++)
    {
        cin >> coords[i][0] >> coords[i][1];
    }
    sort(coords.begin(), coords.end(), [](const vector<int> &a, const vector<int> &b)
         {
             if (a[0] == b[0])
                 return a[1] < b[1]; // x가 같으면 y 오름차순
             return a[0] < b[0];     // x 오름차순
         });
    for (int i = 0; i < N; i++)
    {
        cout << coords[i][0] << ' ' << coords[i][1] << '\n';
    }
}