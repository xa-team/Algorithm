// 7662. 이중 우선순위 큐

#include <iostream>
#include <map>
#include <queue>
#include <vector>

using namespace std;

int main()
{
    priority_queue<int> max_pq;                            // 최대 힙
    priority_queue<int, vector<int>, greater<int>> min_pq; // 최소 힙
    map<int, int> cnt;

    auto push = [&](int n)
    {
        max_pq.push(n);
        min_pq.push(n);
        cnt[n]++;
    };

    auto delete_max = [&]()
    {
        while (!max_pq.empty() && cnt[max_pq.top()] == 0)
        {
            max_pq.pop();
        }

        if (!max_pq.empty())
        {
            cnt[max_pq.top()]--;
            max_pq.pop();
        }
    };

    auto delete_min = [&]()
    {
        while (!min_pq.empty() && cnt[min_pq.top()] == 0)
        {
            min_pq.pop();
        }
        if (!min_pq.empty())
        {
            cnt[min_pq.top()]--;
            min_pq.pop();
        }
    };

    int t;
    cin >> t;

    while (t-- > 0)
    {
        max_pq = priority_queue<int>();
        min_pq = priority_queue<int, vector<int>, greater<int>>();
        cnt = map<int, int>();

        int k;
        cin >> k;
        while (k-- > 0)
        {
            char c;
            int n;
            cin >> c >> n;

            if (c == 'I')
                push(n);
            else if (n == 1)
                delete_max();
            else
                delete_min();
        }

        while (!max_pq.empty() && cnt[max_pq.top()] == 0)
            max_pq.pop();
        while (!min_pq.empty() && cnt[min_pq.top()] == 0)
            min_pq.pop();

        if (max_pq.empty() || min_pq.empty())
        {
            cout << "EMPTY" << endl;
        }
        else
        {
            if (!max_pq.empty())
                cout << max_pq.top() << " ";
            if (!min_pq.empty())
                cout << min_pq.top();
            cout << endl;
        }
    }
}