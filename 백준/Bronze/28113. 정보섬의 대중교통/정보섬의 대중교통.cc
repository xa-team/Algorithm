// 28113. 정보섬의 대중교통

#include <iostream>

using namespace std;

int main()
{
    int N, A, B;

    cin >> N >> A >> B;

    if (A < B)
        cout << "Bus";
    else if (A == B)
        cout << "Anything";
    else
        cout << "Subway";
}
