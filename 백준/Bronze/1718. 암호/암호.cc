// 1718. 암호

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str, pwd;
    getline(cin, str);
    cin >> pwd;

    int idx = 0; // 비밀번호 순환 인덱스
    for (char c : str)
    {
        if (c != ' ')
        {
            int key = pwd[idx % pwd.size()] - 'a' + 1;
            int dec = c - key;
            if (dec < 'a')
                dec += 26;
            cout << (char)dec;
            idx++;
        }
        else
        {
            cout << ' ';
            idx++;
        }
    }
}
