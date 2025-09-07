// 32288. 바코드 닉네임

#include <iostream>
using namespace std;

int main()
{
    int n;
    string str;

    cin >> n >> str;

    for (char c : str)
    {
        if (c == 'I')
            cout << 'i';
        else if (c == 'l')
            cout << 'L';
    }
}