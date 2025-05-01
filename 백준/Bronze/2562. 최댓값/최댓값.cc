// 2562. 최댓값

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }
    int *maxIt = max_element(arr, arr + 9);

    cout << *maxIt << '\n';

    cout << (maxIt - arr + 1);
}