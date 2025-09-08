// 14624. 전북대학교

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << "I LOVE CBNU";
    else
    {
        for (int i = 0; i < n; ++i)
            cout << '*';
        cout << '\n';

        for (int i = 0; i < n / 2 + 1; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (j == n / 2 - i || j == n / 2 + i)
                    cout << '*';
                else if (j > n / 2 + i)
                    break;
                else
                    cout << ' ';
            }
            cout << '\n';
        }
    }
}