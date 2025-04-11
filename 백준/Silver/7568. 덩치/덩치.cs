int N = int.Parse(Console.ReadLine());

List<(int weight, int height, int index)> info = new(N);
for (int i = 0; i < N; i++)
{
    int[] tmp = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
    info.Add((tmp[0], tmp[1], i));
}

List<(int weight, int height, int index)> sortedList =
info.OrderByDescending(x => x.height)
    .ThenBy(x => x.weight)
    .ToList();

int[] rank = new int[N];
rank[sortedList[0].index] = 1;
for (int i = 1; i < N; i++)
{
    int count = 1;
    // // 키순으로 정렬되어 있으니 키는 전 사람과 비교했을 때 같거나 작음.
    // // 무게만 비교해서 전사람의 무게가 더 무겁다면 전 사람의 덩치가 더 큼.
    // if (sortedList[i - 1].weight > sortedList[i].weight)
    // {
    //     count = i + 1;
    // }
    // rank[sortedList[i].index] = count;

    for (int j = i - 1; j >= 0; j--)
    {
        if (sortedList[j].weight > sortedList[i].weight)
        {
            count++;
        }
    }
    rank[sortedList[i].index] = count;
}

Console.Write(string.Join(" ", rank));