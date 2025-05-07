// 1074. Z

#include <iostream>
#include <cmath>

using namespace std;

int Z(int n, int r, int c)
{
    if (n == 0)
        return 0;
    int half = 1 << (n - 1);
    int offset = half * half;

    if (r < half && c < half) // 1사분면
        return Z(n - 1, r, c);
    if (r < half && c >= half) // 2사분면
        return offset + Z(n - 1, r, c - half);
    if (r >= half && c < half) // 3사분면
        return 2 * offset + Z(n - 1, r - half, c);
    return 3 * offset + Z(n - 1, r - half, c - half); // 4사분면
}

int main()
{
    int N, r, c;
    cin >> N >> r >> c;

    cout << Z(N, r, c);
}