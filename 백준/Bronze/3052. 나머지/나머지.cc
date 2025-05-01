// 3052. 나머지

#include <iostream>

using namespace std;

int main()
{
    int arr[42] = {0};
    for (int i = 0; i < 10; i++)
    {
        int n;
        cin >> n;
        arr[n % 42] = 1;
    }
    int sum = 0;
    for (int n : arr)
    {
        sum += n;
    }
    cout << sum;
}