// 9461. 파도반 수열

#include <bits/stdc++.h>
using namespace std;

vector<long long> getPadoSequence()
{
    vector<long long> pado(101);
    pado[1] = 1;
    pado[2] = 1;
    pado[3] = 1;
    pado[4] = 2;
    pado[5] = 2;
    for (int i = 6; i < 101; ++i)
    {
        pado[i] = pado[i - 1] + pado[i - 5];
    }
    return pado;
}

int main()
{
    int t;
    cin >> t;

    vector<long long> pado = getPadoSequence();

    while (t--)
    {
        int n;
        cin >> n;
        cout << pado[n] << '\n';
    }
}