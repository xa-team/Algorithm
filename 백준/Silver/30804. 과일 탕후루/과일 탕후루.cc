// 30804. 과일 탕후루

// 슬라이딩 윈도우로 바꿔서 다시 풀기

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    vector<int> tanghuru(n);

    for (int i = 0; i < n; ++i)
        cin >> tanghuru[i];

    vector<int> fruits(10, 0);
    int size = 0;
    int left = 0;
    int maxLength = 0;
    for (int right = 0; right < n; ++right)
    {
        if (fruits[tanghuru[right]] == 0)
            size++;

        fruits[tanghuru[right]]++;

        while (size > 2)
        {
            if (--fruits[tanghuru[left]] == 0)
                size--;
            left++;
        }
        maxLength = max(maxLength, right - left + 1);
    }
    cout << maxLength;
}