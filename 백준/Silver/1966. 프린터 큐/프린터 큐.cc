#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T-- > 0)
    {
        int N, M;
        cin >> N >> M;

        queue<pair<int, int>> q;
        priority_queue<int> pq;

        for (int i = 0; i < N; ++i)
        {
            int priority;
            cin >> priority;
            q.push({priority, i});
            pq.push(priority);
        }

        int count = 0;
        while (!q.empty())
        {
            pair<int, int> current = q.front();
            q.pop();

            // 현재 문서가 우선순위 가장 높은 문서인지 확인
            if (current.first == pq.top())
            {
                pq.pop();
                count++;

                if (current.second == M)
                {
                    cout << count << '\n';
                    break;
                }
            }
            else
            {
                q.push(current);
            }
        }
    }
}
