// 11365. !밀비 급일

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> password;
    while (true)
    {
        string str;
        getline(cin, str);
        if (str != "END")
            password.push_back(str);
        else
            break;
    }
    for (string str : password)
    {
        for (auto it = str.rbegin(); it != str.rend(); ++it)
            cout << *it;
        cout << '\n';
    }
}