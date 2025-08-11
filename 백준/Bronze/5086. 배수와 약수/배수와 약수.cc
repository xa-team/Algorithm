// 5086. 배수와 약수

#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int a, b;
        cin >> a >> b;

        if (a == b && a == 0)
        {
            break;
        }
        else if (a < b)
        {
            if (b % a == 0)
                cout << "factor";
            else
                cout << "neither";
        }
        else
        {
            if (a % b == 0)
                cout << "multiple";
            else
                cout << "neither";
        }
        cout << "\n";
    }
}
