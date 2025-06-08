// 11948. 과목선택

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> science(4);
    vector<int> seleted(2);
    for (int i = 0; i < 4; ++i)
        cin >> science[i];
    for (int i = 0; i < 2; ++i)
        cin >> seleted[i];
    sort(science.begin(), science.end(), greater<int>());
    sort(seleted.begin(), seleted.end(), greater<int>());

    int sum = 0;
    for (int i = 0; i < 3; ++i)
        sum += science[i];
    sum += seleted[0];
    cout << sum;
}