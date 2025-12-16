/// 11053. 가장 긴 증가하는 부분 수열

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> DP(n, 0);

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    DP[0] = 1;
    for (int i = 1; i < n; ++i)
    {
        int maxDP = 0;
        for (int j = 0; j < i; ++j)
        {
            if (arr[j] < arr[i])
                maxDP = max(maxDP, DP[j]);
        }
        DP[i] = maxDP + 1;
    }

    cout << *(max_element(DP.begin(), DP.end()));
}