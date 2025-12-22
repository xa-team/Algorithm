// 1149. RGB거리

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int R = 0, G = 0, B = 0;
    int costR, costG, costB;

    cin >> costR >> costG >> costB;
    R = costR;
    G = costG;
    B = costB;

    for (int i = 1; i < n; ++i)
    {
        cin >> costR >> costG >> costB;

        int nextR = costR + min(G, B);
        int nextG = costG + min(R, B);
        int nextB = costB + min(R, G);

        R = nextR;
        G = nextG;
        B = nextB;
    }

    cout << min({R, G, B});
}