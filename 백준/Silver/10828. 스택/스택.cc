// 10828. 스택

#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> st;
    int n;
    cin >> n;

    while (n-- > 0)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "push")
        {
            int num;
            cin >> num;
            st.push(num);
        }
        else if (cmd == "pop")
        {
            if (st.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << st.top() << '\n';
                st.pop();
            }
        }
        else if (cmd == "top")
        {
            if (st.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << st.top() << '\n';
            }
        }
        else if (cmd == "size")
        {
            cout << st.size() << '\n';
        }
        else if (cmd == "empty")
        {
            if (st.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
    }
}