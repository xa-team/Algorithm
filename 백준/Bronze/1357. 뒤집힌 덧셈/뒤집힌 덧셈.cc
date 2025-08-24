// 1357. 뒤집힌 덧셈

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    int a = stoi(x);
    int b = stoi(y);
    string anw = to_string(a + b);
    reverse(anw.begin(), anw.end());
    cout << stoi(anw);
}