// 11286. 절댓값 힙(벡터 이용용)

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class absoluteHeap
{
private:
    vector<int> heap;

    void heapifyUP(int i);
    void heapifyDown(int i);
    bool isHigherPriority(int a, int b);

public:
    void push(int value);
    void pop();
    int top() const;
    bool empty() const;
    int size() const;
};

bool absoluteHeap::isHigherPriority(int a, int b)
{
    if (abs(a) != abs(b))
        return abs(a) < abs(b);
    return a < b; // 절댓값 같으면 음수 우선
}

void absoluteHeap::heapifyUP(int i)
{
    while (i > 0)
    {
        int parent = (i - 1) / 2;
        if (!isHigherPriority(heap[i], heap[parent]))
            break;
        swap(heap[i], heap[parent]);
        i = parent;
    }
}

void absoluteHeap::heapifyDown(int i)
{
    int size = heap.size();

    while (true)
    {
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        int smallest = i;

        if (left < size && isHigherPriority(heap[left], heap[smallest]))
            smallest = left;
        if (right < size && isHigherPriority(heap[right], heap[smallest]))
            smallest = right;

        if (smallest == i)
            break;

        swap(heap[i], heap[smallest]);
        i = smallest;
    }
}

void absoluteHeap::push(int value)
{
    heap.push_back(value);
    heapifyUP(heap.size() - 1);
}

void absoluteHeap::pop()
{
    if (heap.empty())
        return;

    heap[0] = heap.back();
    heap.pop_back();

    if (!heap.empty())
        heapifyDown(0);
}

int absoluteHeap::top() const
{
    return heap.empty() ? 0 : heap[0];
}

bool absoluteHeap::empty() const
{
    return heap.empty();
}

int absoluteHeap::size() const
{
    return heap.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    absoluteHeap absHeap;

    int N;
    cin >> N;
    while (N--)
    {
        int num;
        cin >> num;

        if (num == 0)
        {
            cout << absHeap.top() << '\n';
            absHeap.pop();
        }
        else
        {
            absHeap.push(num);
        }
    }
}