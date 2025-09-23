// 19698. 헛간 청약

#include <iostream>
using namespace std;

int main()
{
    int n, w, h, l;
    cin >> n >> w >> h >> l;

    int anw = (w / l) * (h / l);
    if (anw > n)
        cout << n;
    else
        cout << anw;
}