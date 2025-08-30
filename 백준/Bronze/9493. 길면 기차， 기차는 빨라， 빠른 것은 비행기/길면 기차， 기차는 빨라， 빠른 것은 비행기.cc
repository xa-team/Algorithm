// 9493. 길면 기차, 기차는 빨라, 빠른 것은 비행기

#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        double m, a, b;
        cin >> m >> a >> b;

        if (m == 0 && a == 0 && b == 0)
            break;

        double t1, t2;
        t1 = m / a;
        t2 = m / b;

        int total = (int)round((t1 - t2) * 3600);

        int hour = total / 3600;
        int min = (total % 3600) / 60;
        int sec = total % 60;

        printf("%01d:%02d:%02d\n", hour, min, sec);
    }
}