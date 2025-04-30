// 1008. A/B

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b;

    cin >> a >> b;
    cout << fixed << setprecision(10) << a / b;
}