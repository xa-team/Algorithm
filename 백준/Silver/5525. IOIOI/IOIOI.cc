// 5525. IOIOI

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    string str;

    cin >> n >> s >> str;

    stack<char> st;
    for (char c : str)
        st.push(c);

    bool state = false;
    int count = 0, result = 0;
    while (!st.empty())
    {
        char top = st.top();
        st.pop();

        if (top == 'I')
        {
            if (state == false)
            {
                if (count >= n)
                    result++;
            }
            else
                count = 0;
            state = true;
        }
        else
        {
            if (state)
                count++;
            else
                count = 0;
            state = false;
        }
    }

    cout << result;
}