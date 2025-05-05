// 5554. 심부름 가는 길

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        int n;
        cin >> n;
        sum += n;
    }
    cout << sum / 60
         << '\n'
         << sum % 60;
}