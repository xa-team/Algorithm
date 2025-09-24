// 21866. 추첨을 통해 커피를 받자

#include <iostream>
using namespace std;

int score[9] = {100, 100, 200, 200, 300, 300, 400, 400, 500};

int main()
{
    int sum = 0;
    bool isHacker = false;
    for (int i = 0; i < 9; ++i)
    {
        int n;
        cin >> n;
        sum += n;

        if (n > score[i])
        {
            isHacker = true;
            break;
        }
    }

    if (isHacker)
    {
        cout << "hacker";
    }
    else
    {
        if (sum >= 100)
            cout << "draw";
        else
            cout << "none";
    }
}