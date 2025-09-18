// 2810. 컵홀더

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int sum = 1;
    stack<char> st;
    for (char c : str)
    {
        if (c == 'S')
        {
            sum++;
        }
        else if (c == 'L')
        {
            if (st.empty())
            {
                st.push(c);
            }
            else
            {
                st.pop();
                sum++;
            }
        }
    }
    if (sum > n)
        sum = n;
    cout << sum;
}