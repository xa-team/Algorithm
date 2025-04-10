using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int N = int.Parse(sr.ReadLine());

Dictionary<int, int> numDic = new Dictionary<int, int>();
List<int> list = new List<int>();
for (int i = 0; i < N; i++)
{
    int num = int.Parse(sr.ReadLine());
    list.Add(num);
    numDic[num] = numDic.GetValueOrDefault(num, 0) + 1;
}

sw.WriteLine((int)Math.Round((double)list.Sum() / N)); // 산술 평균 출력

list.Sort();
sw.WriteLine(list[N / 2]); // 중앙값 출력

int countMax = numDic.Values.Max();
var sortedCountList = numDic
    .OrderBy(x => x.Value)
    .ThenBy(y => y.Key)
    .Where(x => x.Value == countMax)
    .Select(x => x.Key)
    .ToList();

sw.WriteLine(sortedCountList.Count > 1 ? sortedCountList[1] : sortedCountList[0]);// 최빈값 출력

sw.WriteLine(numDic.Keys.Max() - numDic.Keys.Min()); // 범위 출력