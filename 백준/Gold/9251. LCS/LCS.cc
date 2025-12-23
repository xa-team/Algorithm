// 9251. LCS

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int DP[1002][1002];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str1, str2;
    cin >> str1 >> str2;

    int len1, len2;
    len1 = str1.length();
    len2 = str2.length();

    for (int i = 1; i <= len1; ++i)
    {
        for (int j = 1; j <= len2; ++j)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                DP[i][j] = DP[i - 1][j - 1] + 1;
            }
            else
            {
                DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
            }
        }
    }

    cout << DP[len1][len2];
}