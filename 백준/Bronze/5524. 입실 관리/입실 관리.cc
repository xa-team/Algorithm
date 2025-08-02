// 5524. 입실 관리

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        vector<char> anwser;
        for (char c : str)
        {
            if (c >= 'a' && c <= 'z')
            {
                anwser.push_back(c);
            }
            else
            {
                char tmp = c + 32;
                anwser.push_back(tmp);
            }
        }
        for (char c : anwser)
            cout << c;
        cout << endl;
    }
}
