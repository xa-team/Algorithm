// 3052. 나머지

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, bool> numCount;
    for (int i = 0; i < 42; i++)
    {
        numCount[i] = false;
    }
    for (int i = 0; i < 10; i++)
    {
        int n;
        cin >> n;
        numCount[n % 42] = true;
    }

    int count = 0;
    for (int i = 0; i < 42; i++)
    {
        if (numCount[i])
        {
            count++;
        }
    }
    cout << count;
}