// 17219. 비밀번호 찾기

#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)

int main()
{
    int n, m;
    cin >> n >> m;

    map<string, string> passwords;

    while (n--)
    {
        string page, pwd;
        cin >> page >> pwd;
        passwords.insert(pair<string, string>(page, pwd));
    }
    while (m--)
    {
        string page;
        cin >> page;
        cout << passwords.find(page)->second << '\n';
    }
}