// 5063. TGN

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int r, e, c;
        cin >> r >> e >> c;

        if (e - c > r)
            cout << "advertise";
        else if (e - c == r)
            cout << "does not matter";
        else
            cout << "do not advertise";
        cout << "\n";
    }
}