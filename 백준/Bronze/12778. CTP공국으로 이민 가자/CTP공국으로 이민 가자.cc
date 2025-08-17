// 12778. CPT공국으로 이민 가자

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int m;
        char c;
        cin >> m >> c;
        if (c == 'C')
        {
            while (m-- > 0)
            {
                char tmp;
                cin >> tmp;
                cout << tmp - 'A' + 1;
                cout << ' ';
            }
            cout << endl;
        }
        else if (c == 'N')
        {
            while (m-- > 0)
            {
                int n;
                cin >> n;
                char anw = 'A' + (n - 1);
                cout << anw << ' ';
            }
            cout << endl;
        }
    }
}