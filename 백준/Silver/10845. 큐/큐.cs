class MyQueue<int32>{
    private const int DefualtCapacity = 4;
    internal int[] _items;
    internal int _size;
#pragma warning disable CA1825, IDE0300
    private static readonly int[] s_emptyArray = new int[1];
#pragma warning restore CA1825, IDE0300

    public MyQueue()
    {
        _items = s_emptyArray;
    }

    public int Size(){
        return _size;
    }

    public void Push(int item)
    {
        int size = _size;
        _size = size + 1;
        if(size == 0)
        {
            int[] array = _items;
            array[size] = item;
        }
        else
        {
            int[] array_1 = _items;
            int[] array_2 = {item};
            int[] result = array_1.Concat(array_2).ToArray();
        
            Array.Resize(ref _items, _items.Length + 1);

            _items = result;
        }
        
        
    }

    public int Pop(){
        if(_size == 0)
        {
            return -1;
        }
        else
        {
            
            int firstItem = _items[0];
            int size = _size;
            _size = size - 1;

            if(_size == 0)
            {
                int[] array = new int[1];
                _items = array;
            }
            else
            {
                
                int[] array = _items;
                int[] tmpArr = new int[_size];

                Array.Copy(array, 1, tmpArr, 0, _size);

                _items = tmpArr;
            }
            

            return firstItem;
        }
    }

    public bool Empty()
    {
        return _size == 0;
    }

    public int Front()
    {
        if(_size == 0)
        {
            return -1;
        }
        else
        {
            int[] array = _items;
            return array[0];
        }
    }

    public int Back()
    {
        if(_size == 0)
        {
            return -1;
        }
        else
        {
            int[] array = _items;
            return array[_size-1];
        }
    }
}

class Program
{
    
    static void Main()
    {
        using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
        using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

        MyQueue<int> myQueue = new MyQueue<int>();

        int n = int.Parse(sr.ReadLine());
        int i = 0;
        while(i++<n)
        {
            string[] cmd = sr.ReadLine().Split();
            
            switch(cmd[0])
            {
                case "push":
                    int item = int.Parse(cmd[1]);
                    myQueue.Push(item);
                    break;
                case "pop":
                    sw.WriteLine(myQueue.Pop());
                    break;
                case "size":
                    sw.WriteLine(myQueue.Size());
                    break;
                case "empty":
                    sw.WriteLine(myQueue.Empty() == true ? 1 : 0);
                    break;
                case "front":
                    sw.WriteLine(myQueue.Front());
                    break;
                case "back":
                    sw.WriteLine(myQueue.Back());
                    break;
            }
        }
    }
}