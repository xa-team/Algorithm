#include <iostream>
using namespace std;

int grid[1025][1025] = {0};
int prefix[1025][1025] = {0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            int num;
            cin >> num;
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + num;
        }
    }

    while (M--)
    {
        int x1, y1, x2, y2;
        cin >> y1 >> x1 >> y2 >> x2;

        cout << prefix[y2][x2] - prefix[y1 - 1][x2] - prefix[y2][x1 - 1] + prefix[y1 - 1][x1 - 1] << '\n';
    }

    return 0;
}
