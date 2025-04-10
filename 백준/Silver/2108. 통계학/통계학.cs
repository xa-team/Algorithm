using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int N = int.Parse(sr.ReadLine());

Dictionary<int, int> numDic = new();
List<int> list = new();
int sum = 0;
for (int i = 0; i < N; i++)
{
    int num = int.Parse(sr.ReadLine());
    sum += num;
    list.Add(num);
    numDic[num] = numDic.GetValueOrDefault(num, 0) + 1;
}

sw.WriteLine((int)Math.Round((double)sum / N)); // 산술 평균 출력

list.Sort();
sw.WriteLine(list[N / 2]); // 중앙값 출력

List<int> modes = new();
int countMax = numDic.Values.Max();
foreach (var kvp in numDic)
{
    if (kvp.Value == countMax) modes.Add(kvp.Key);
}

modes.Sort();

int modesValue = modes.Count > 1 ? modes[1] : modes[0];
sw.WriteLine(modesValue);// 최빈값 출력

sw.WriteLine(list[^1] - list[0]); // 범위 출력