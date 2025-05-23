// 2805. 나무자르기

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> trees(n, 0);

    for(int i = 0; i < n; ++i)
    {
        cin >> trees[i];
    }
    
    sort(trees.begin(), trees.end(), greater<int>());

    int left = 0;
    int right = *max_element(trees.begin(), trees.end());
    int result = 0;

    while(left<=right)
    {
        int mid = (left + right) / 2;
        long long sum = 0;

        for(int height : trees)
        {
            if(height > mid)
                sum += (height - mid);
        }

        if(sum >= m)
        {
            result = mid;
            left = mid + 1;
        }
        else
        {
            right = mid-1;
        }
    }

    cout << result;
}