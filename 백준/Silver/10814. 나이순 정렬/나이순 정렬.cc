// 10814. 나이순 정렬

#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<tuple<int, int, string>> infoList(n);
    for (int i = 0; i < n; i++)
    {
        auto &[age, index, name] = infoList[i];
        cin >> age >> name;
        index = i;
    }
    sort(infoList.begin(), infoList.end());

    for (auto &[age, index, name] : infoList)
    {
        cout << age << ' ' << name << '\n';
    }
}