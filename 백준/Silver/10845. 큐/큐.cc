// 10845. 큐

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    queue<int> q;

    int n;
    cin >> n;

    while (n-- > 0)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "push")
        {
            int i;
            cin >> i;
            q.push(i);
        }
        else if (cmd == "pop")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                int front = q.front();
                cout << front << '\n';
                q.pop();
            }
        }
        else if (cmd == "size")
        {
            cout << q.size() << '\n';
        }
        else if (cmd == "empty")
        {
            if (q.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if (cmd == "front")
        {
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.front() << '\n';
        }
        else if (cmd == "back")
        {
            if (q.empty())
                cout << -1 << '\n';
            else
                cout << q.back() << '\n';
        }
    }
}