// 2751. 수 정렬하기 2

#include <iostream>

using namespace std;

const int MAX = 1000001;
int arr[MAX];
int tmp[MAX];

void MergeSort(int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) >> 1; // >> 1 은 / 2 랑 같은 연산

    MergeSort(left, mid);
    MergeSort(mid + 1, right);

    int p1 = left, p2 = mid + 1, p3 = left;
    while (p1 <= mid && p2 <= right)
    {
        if (arr[p1] < arr[p2])
            tmp[p3++] = arr[p1++];
        else
            tmp[p3++] = arr[p2++];
    }

    while (p1 <= mid)
        tmp[p3++] = arr[p1++];

    while (p2 <= right)
        tmp[p3++] = arr[p2++];

    for (int i = left; i <= right; i++)
    {
        arr[i] = tmp[i];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    MergeSort(0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\n';
    }
}