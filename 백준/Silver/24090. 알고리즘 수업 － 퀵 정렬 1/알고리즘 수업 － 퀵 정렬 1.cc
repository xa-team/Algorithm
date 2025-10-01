// 24090. 알고리즘 수업 - 퀵 정렬 1
#include <bits/stdc++.h>
using namespace std;

int n;
long long k, cnt = 0;

// k번째 swap 시 바로 출력하고 종료
void checkSwap(int a, int b)
{
    cnt++;
    if (cnt == k)
    {
        cout << a << " " << b << "\n";
        exit(0); // 프로그램 강제 종료
    }
}

int partition(vector<int> &A, int p, int r)
{
    int x = A[r]; // pivot
    int i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (A[j] <= x)
        {
            i++;
            swap(A[i], A[j]);
            checkSwap(A[i], A[j]);
        }
    }
    if (i + 1 != r)
    {
        swap(A[i + 1], A[r]);
        checkSwap(A[i + 1], A[r]);
    }
    return i + 1;
}

void quick_sort(vector<int> &A, int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p, r);
        quick_sort(A, p, q - 1);
        quick_sort(A, q + 1, r);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    quick_sort(A, 0, n - 1);

    cout << -1 << "\n"; // k번째 교환이 없을 경우
}
