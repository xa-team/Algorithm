// 4892. 숫자 맞추기 게임

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1;; ++i)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        cout << i << ". ";

        n *= 3;
        if (n % 2 == 0)
        {
            n /= 2;
            cout << "even ";
        }
        else
        {
            n = (n + 1) / 2;
            cout << "odd ";
        }
        n /= 3;
        cout << n << "\n";
    }
}