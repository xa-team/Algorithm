// 1966. 프린트 큐

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T-- > 0)
    {
        // priority_queue<vector<int>, vector<vector<int>>> pq; // 큐 안에 (우선순위, 인덱스) 인 벡터를 넣을 것.
        // int N, M;
        // cin >> N >> M;
        // for (int i = 0; i < N; i++)
        // {
        //     int priority;
        //     cin >> priority;
        //     pq.push({priority, i});
        // }

        // int count = 1;
        // while (!pq.empty())
        // {
        //     vector<int> current = pq.top();
        //     pq.pop();
        //     if (current[1] == M)
        //     {
        //         cout << count << '\n';
        //         break;
        //     }
        // }

        queue<vector<int>> q;
        int N, M;
        cin >> N >> M;
        for (int i = 0; i < N; ++i)
        {
            int priority;
            cin >> priority;
            q.push({priority, i});
        }

        int count = 0;
        while (!q.empty())
        {
            vector<int> current = q.front();
            q.pop();
            bool hasHigher = false;
            int queueSize = q.size();
            for (int i = 0; i < queueSize; ++i)
            {
                vector<int> next = q.front();
                q.pop();

                if (next[0] > current[0])
                    hasHigher = true;

                q.push(next);
            }

            if (hasHigher)
            {
                q.push(current);
            }
            else
            {
                count++;
                if (current[1] == M)
                {
                    cout << count << '\n';
                    break;
                }
            }
        }
    }
}