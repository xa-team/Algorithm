// 1629. 곱셈

#include <climits>
#include <iostream>
#include <vector>

using namespace std;

long long DAQ(int a, int n, int c)
{
    if (n == 0)
        return 1;

    long long half = DAQ(a, n / 2, c);

    if (n % 2 == 0)
        return (half * half) % c;
    else
        return ((half * half) % c * (a % c)) % c;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << DAQ(a, b, c);
}