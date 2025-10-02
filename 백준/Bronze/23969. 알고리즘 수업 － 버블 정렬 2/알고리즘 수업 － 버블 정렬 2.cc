// 23969. 알고리즘 수업 - 버블 정렬 2

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, k;
    int cnt = 0;
    cin >> a >> k;

    vector<int> array(a);
    for (int i = 0; i < a; ++i)
        cin >> array[i];

    for (int i = 0; i < a - 1; ++i)
    {
        for (int j = 0; j < a - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {
                swap(array[j], array[j + 1]);
                cnt++;
                if (cnt == k)
                {
                    for (int n : array)
                        cout << n << ' ';
                    exit(0);
                }
            }
        }
    }

    if (cnt < k)
        cout << "-1";
}