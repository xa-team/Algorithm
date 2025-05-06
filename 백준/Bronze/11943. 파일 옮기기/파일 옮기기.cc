// 11943. 파일 옮기기

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b;
    cin >> c >> d;

    if (a + d <= c + b)
    {
        cout << a + d;
    }
    else
    {
        cout << b + c;
    }
}
