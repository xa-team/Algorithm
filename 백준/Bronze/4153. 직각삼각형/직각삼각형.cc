// 4153. 직각 삼각형

#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    while (true)
    {
        vector<double> sides(3);
        cin >> sides[0] >> sides[1] >> sides[2];
        sort(sides.begin(), sides.end(), [](double a, double b)
             { return a > b; });

        if (sides[0] == 0)
            break;
        else if (pow(sides[0], 2) == pow(sides[1], 2) + pow(sides[2], 2))
            cout << "right" << '\n';
        else
            cout << "wrong" << '\n';
    }
}