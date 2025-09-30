// 31907. GIST 찍기

#include <iostream>
#include <string>

using namespace std;

int main()
{

    long long k;
    cin >> k;

    for (long long i = 0; i < k; ++i)
    {
        string str;
        str.append(k, 'G');
        str.append(k, '.');
        str.append(k, '.');
        str.append(k, '.');
        cout << str << '\n';
    }
    for (long long i = 0; i < k; ++i)
    {
        string str;
        str.append(k, '.');
        str.append(k, 'I');
        str.append(k, '.');
        str.append(k, 'T');
        cout << str << '\n';
    }
    for (long long i = 0; i < k; ++i)
    {
        string str;
        str.append(k, '.');
        str.append(k, '.');
        str.append(k, 'S');
        str.append(k, '.');
        cout << str << '\n';
    }
}