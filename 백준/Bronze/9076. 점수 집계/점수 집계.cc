// 9076. 점수 집계

#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int score[5];
        for (int i = 0; i < 5; ++i)
            cin >> score[i];

        sort(score, score + 5);

        if (score[3] - score[1] >= 4)
            cout << "KIN\n";
        else
            cout << score[1] + score[2] + score[3] << "\n";
    }
}