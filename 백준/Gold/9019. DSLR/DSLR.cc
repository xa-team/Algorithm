// 9019.DSLR

#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int parent[10001];
char how[10001];
vector<bool> visited(19999);

int command_D(int n)
{
    return (n * 2) % 10000;
}
int command_S(int n)
{
    return (n == 0) ? 9999 : n - 1;
}
int command_L(int n)
{
    return (n % 1000) * 10 + (n / 1000);
}
int command_R(int n)
{
    return (n % 10) * 1000 + (n / 10);
}

string BFS(int start, int target)
{
    string answer = "";
    queue<int> q;
    q.push(start);

    visited[start] = true;

    while (!q.empty())
    {
        int cur = q.front();
        q.pop();

        if (cur == target)
        {
            while (cur != start)
            {
                answer += how[cur];
                cur = parent[cur];
            }

            reverse(answer.begin(), answer.end());

            break;
        }

        int nextNum = command_D(cur);
        if (!visited[nextNum])
        {
            visited[nextNum] = true;
            parent[nextNum] = cur;
            how[nextNum] = 'D';
            q.push(nextNum);
        }

        nextNum = command_S(cur);
        if (!visited[nextNum])
        {
            visited[nextNum] = true;
            parent[nextNum] = cur;
            how[nextNum] = 'S';
            q.push(nextNum);
        }

        nextNum = command_L(cur);
        if (!visited[nextNum])
        {
            visited[nextNum] = true;
            parent[nextNum] = cur;
            how[nextNum] = 'L';
            q.push(nextNum);
        }

        nextNum = command_R(cur);
        if (!visited[nextNum])
        {
            visited[nextNum] = true;
            parent[nextNum] = cur;
            how[nextNum] = 'R';
            q.push(nextNum);
        }
    }

    return answer;
}

int main()
{
    int t;
    cin >> t;

    while (t-- > 0)
    {
        int a, b;
        cin >> a >> b;

        visited.assign(19999, false);

        string ans = BFS(a, b);
        cout << ans << "\n";
    }
}