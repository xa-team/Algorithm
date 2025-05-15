// 1927. 최소 힙(벡터를 이용)

#include <iostream>
#include <vector>

using namespace std;

class minHeap
{
private:
    vector<int> heap;

    void heapifyUP(int i);
    void heapifyDown(int i);

public:
    void push(int value);
    void pop();
    int top() const;
    bool empty() const;
    int size() const;
};

void minHeap::heapifyUP(int i)
{
    while (i > 0)
    {
        int parent = (i - 1) / 2;
        if (heap[i] >= heap[parent])
            break;

        swap(heap[i], heap[parent]);
        i = parent;
    }
}

void minHeap::heapifyDown(int i)
{
    int size = heap.size();

    while (true)
    {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        int smallest = i;

        if (left < size && heap[left] < heap[smallest])
            smallest = left;
        if (right < size && heap[right] < heap[smallest])
            smallest = right;

        if (smallest == i)
            break;

        swap(heap[i], heap[smallest]);
        i = smallest;
    }
}

void minHeap::push(int value)
{
    heap.push_back(value);
    heapifyUP(heap.size() - 1);
}

void minHeap::pop()
{
    if (heap.empty())
        return;

    heap[0] = heap.back();
    heap.pop_back();

    if (!heap.empty())
        heapifyDown(0);
}

int minHeap::top() const
{
    return heap.empty() ? 0 : heap[0];
}

bool minHeap::empty() const
{
    return heap.empty();
}

int minHeap::size() const
{
    return heap.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    minHeap minHeap;

    int N;
    cin >> N;
    while (N--)
    {
        int num;
        cin >> num;

        if (num == 0)
        {
            cout << minHeap.top() << '\n';
            minHeap.pop();
        }
        else
        {
            minHeap.push(num);
        }
    }
}