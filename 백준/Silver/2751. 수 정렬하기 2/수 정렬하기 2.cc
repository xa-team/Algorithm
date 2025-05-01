// 2751 수 정렬하기 2

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v(N);
    for (auto &num : v)
        cin >> num;

    sort(v.begin(), v.end());
    for (const auto &num : v)
        cout << num << '\n';
}