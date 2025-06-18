// 5430. AC

#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)

deque<int> makeVector()
{
    deque<int> arr;
    string line;
    cin >> line;
    line.erase(remove(line.begin(), line.end(), '['), line.end());
    line.erase(remove(line.begin(), line.end(), ']'), line.end());

    stringstream ss(line);
    string token;
    while (getline(ss, token, ','))
    {
        int num = stoi(token);
        arr.push_back(num);
    }
    return arr;
}

int main()
{

    fastio;
    int t;
    cin >> t;

    while (t--)
    {
        string func;
        int n;
        cin >> func >> n;
        deque<int> arr = makeVector();

        bool isError = false, reversed = false;

        for (char c : func)
        {
            if (c == 'R')
                reversed = !reversed;
            else if (c == 'D')
            {
                if (arr.empty())
                {
                    isError = true;
                    break;
                }
                if (reversed)
                    arr.pop_back();
                else
                    arr.pop_front();
            }
        }
        if (isError)
        {
            cout << "error" << endl;
        }
        else
        {
            cout << '[';
            if (reversed)
                for (auto it = arr.rbegin(); it != arr.rend(); ++it)
                    cout << *it << (it + 1 != arr.rend() ? "," : "");
            else
                for (auto it = arr.begin(); it != arr.end(); ++it)
                    cout << *it << (it + 1 != arr.end() ? "," : "");

            cout << "]" << endl;
        }
    }
}