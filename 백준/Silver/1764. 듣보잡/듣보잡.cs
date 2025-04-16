using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int[] input = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
int N = input[0];
int M = input[1];

HashSet<string> hash = new(N);
List<string> answer = new();
while (N-- > 0)
{
    hash.Add(sr.ReadLine());
}
while (M-- > 0)
{
    string str = sr.ReadLine();
    if (hash.Contains(str))
    {
        answer.Add(str);
    }
}
answer.Sort();
sw.WriteLine($"{answer.Count}");
sw.WriteLine(string.Join("\n", answer));