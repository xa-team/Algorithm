// 15964. 이상한 기호

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    long long result = (a + b) * (a - b);
    cout << result;
}