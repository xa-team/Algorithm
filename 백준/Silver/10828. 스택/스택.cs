
class MyStack<int32>
{
    private const int DefaultCapacity = 4;
    internal int[] _items;

    internal int _size;

#pragma warning disable CA1825, IDE0300 // avoid the extra generic instantiation for Array.Empty<T>()
        private static readonly int[] s_emptyArray = new int[4];
#pragma warning restore CA1825, IDE0300

    public MyStack()
    {
        _items = s_emptyArray;
    }

    public int Size()
    {
        return _size;
    }

    public void Push(int item)
    {
        int[] array = _items;
        int size = _size;
        if(size < array.Length)
        {
            _size = size + 1;
            array[size] = item;
        }
        else
        {
            Array.Resize(ref _items, _items.Length * 2);;
            _size = size + 1;
            _items[size] = item;
        }
    }

    public int Pop()
    {
        if(_size == 0)
        {
            return -1;
        }
        else
        {
            _size = _size - 1;
            int topItem = _items[_size];

#pragma warning disable CS8601 // 가능한 null 참조 할당입니다.
            _items[_size] = default;
#pragma warning restore CS8601 // 가능한 null 참조 할당입니다.

            return topItem;
        }
    }

    public bool Empty()
    {
        return _size == 0;
    }

    public int Top()
    {
        if(_size == 0)
        {
            return -1;
        }
        else
        {
            int size = _size;
            int topItem = _items[size-1];
            return topItem;
        }
    }
}

class Program
{
    
    static void Main()
    {
        using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
        MyStack<int> myStack = new MyStack<int>();

        int n = int.Parse(sr.ReadLine());

        for(int i = 0; i < n; i++)
        {
            string[] cmd = sr.ReadLine().Split();
            switch(cmd[0])
            {
                case "push":
                    myStack.Push(int.Parse(cmd[1]));
                    break;
                case "pop":
                    sw.WriteLine(myStack.Pop());
                    break;
                case "size":
                    sw.WriteLine(myStack.Size());
                    break;
                case "empty":
                    if(myStack.Empty())
                    {
                        sw.WriteLine(1);
                    }
                    else
                    {
                        sw.WriteLine(0);
                    }
                    break;
                case "top":
                    sw.WriteLine(myStack.Top());
                    break;
            }
        }
    }
}