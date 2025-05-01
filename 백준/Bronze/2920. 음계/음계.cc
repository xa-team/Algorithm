// 2920. 음계

#include <iostream>

using namespace std;

int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }

    bool isAscending = true,
         isDescending = true;
    for (int i = 1; i < 8; i++)
    {
        if (arr[i - 1] + 1 != arr[i] && isAscending)
        {
            isAscending = false;
        }
        if (arr[i - 1] - 1 != arr[i] && isDescending)
        {
            isDescending = false;
        }
    }
    if (isAscending)
    {
        cout << "ascending";
    }
    else if (isDescending)
    {
        cout << "descending";
    }
    else
    {
        cout << "mixed";
    }
}