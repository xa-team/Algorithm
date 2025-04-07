using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int n = int.Parse(sr.ReadLine());

while (n-- > 0)
{
    int[] numArr = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
    int m = numArr[0];
    int wantedIndex = numArr[1];

    int[] priorities = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
    var queue = new Queue<(int priority, int index)>(m);

    for (int i = 0; i < m; i++) queue.Enqueue((priorities[i], i));

    int cnt = 0;
    while (queue.Count > 0)
    {
        var cur = queue.Dequeue();
        if (queue.Any(x => x.priority > cur.priority))
        {
            queue.Enqueue(cur);
        }
        else
        {
            cnt++;
            if (cur.index == wantedIndex)
            {
                Console.WriteLine(cnt);
                break;
            }
        }
    }
}
