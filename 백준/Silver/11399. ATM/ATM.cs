using System.Runtime.Intrinsics.Arm;

using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int N = int.Parse(sr.ReadLine());
List<int> input = Array.ConvertAll(sr.ReadLine().Split(), int.Parse).ToList();
input.Sort();

int[] DP = new int[N];
DP[0] = input[0];
for (int i = 1; i < N; i++)
{
    DP[i] = DP[i - 1] + input[i];
}
sw.Write(DP.Sum());