// 27434. 팩토리얼 3

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

struct BigInt
{
    static const ll BASE = 10000000000000LL; // 1e13
    static const int WIDTH = 13;

    vector<ll> digits = {1}; // 초기값: 1

    void multiply(int x)
    {
        ll carry = 0;
        for (auto &d : digits)
        {
            d = d * x + carry;
            carry = d / BASE;
            d %= BASE;
        }
        while (carry > 0)
        {
            digits.push_back(carry % BASE);
            carry /= BASE;
        }
    }

    void print() const
    {
        // 가장 높은 자리수는 앞에 0 없이 출력
        cout << digits.back();
        for (int i = (int)digits.size() - 2; i >= 0; --i)
            cout << setw(WIDTH) << setfill('0') << digits[i];
        // WIDTH자리로 채움
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    BigInt result;
    for (int i = 2; i <= n; ++i)
    {
        result.multiply(i);
    }

    result.print();
    return 0;
}