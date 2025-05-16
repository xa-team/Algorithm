// 11279. 최대 힙(벡터 이용용)

#include <iostream>
#include <vector>

using namespace std;

class maxHeap
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

void maxHeap::heapifyUP(int i)
{
    while (i > 0)
    {
        int parent = (i - 1) / 2;
        if (heap[i] <= heap[parent])
            break;

        swap(heap[i], heap[parent]);
        i = parent;
    }
}

void maxHeap::heapifyDown(int i)
{
    int size = heap.size();

    while (true)
    {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        int biggest = i;

        if (left < size && heap[left] > heap[biggest])
            biggest = left;
        if (right < size && heap[right] > heap[biggest])
            biggest = right;

        if (biggest == i)
            break;

        swap(heap[i], heap[biggest]);
        i = biggest;
    }
}

void maxHeap::push(int value)
{
    heap.push_back(value);
    heapifyUP(heap.size() - 1);
}

void maxHeap::pop()
{
    if (heap.empty())
        return;

    heap[0] = heap.back();
    heap.pop_back();

    if (!heap.empty())
        heapifyDown(0);
}

int maxHeap::top() const
{
    return heap.empty() ? 0 : heap[0];
}

bool maxHeap::empty() const
{
    return heap.empty();
}

int maxHeap::size() const
{
    return heap.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    maxHeap maxHeap;

    int N;
    cin >> N;
    while (N--)
    {
        int num;
        cin >> num;

        if (num == 0)
        {
            cout << maxHeap.top() << '\n';
            maxHeap.pop();
        }
        else
        {
            maxHeap.push(num);
        }
    }
}