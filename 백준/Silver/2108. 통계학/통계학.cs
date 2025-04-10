int N = int.Parse(Console.ReadLine());

Dictionary<int, int> numDic = new Dictionary<int, int>();
List<int> list = new List<int>();
for (int i = 0; i < N; i++)
{
    int num = int.Parse(Console.ReadLine());
    list.Add(num);
    numDic[num] = numDic.GetValueOrDefault(num, 0) + 1;
}

Console.WriteLine((int)Math.Round((double)list.Sum() / N)); // 산술 평균 출력

list.Sort();
Console.WriteLine(list[N / 2]); // 중앙값 출력

int countMax = numDic.Values.Max();
var sortedCountList = numDic
    .OrderBy(x => x.Value)
    .ThenBy(y => y.Key)
    .Where(x => x.Value == countMax)
    .Select(x => x.Key)
    .ToList();

Console.WriteLine(sortedCountList.Count > 1 ? sortedCountList[1] : sortedCountList[0]);

// 최빈값 출력

Console.WriteLine(numDic.Keys.Max() - numDic.Keys.Min()); // 범위 출력