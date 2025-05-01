// 2577. 숫자의 개수

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int result = A * B * C;

    string str;
    str = to_string(result);

    int count[10] = {0};
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        int index = str[i] - '0';
        count[index]++;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << count[i] << '\n';
    }
}