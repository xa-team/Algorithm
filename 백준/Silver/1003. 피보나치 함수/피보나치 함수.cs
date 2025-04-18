using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

int T = int.Parse(sr.ReadLine());
while (T-- > 0)
{
    int n = int.Parse(sr.ReadLine());
    // List<(int cnt0, int cnt1)> DP = new List<(int cnt0, int cnt1)>(n + 1);
    int[,] DP = new int[n + 1, 2];
    DP[0, 0] = 1;
    DP[0, 1] = 0;
    if (n > 0)
    {
        DP[1, 0] = 0;
        DP[1, 1] = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        DP[i, 0] = DP[i - 1, 0] + DP[i - 2, 0];
        DP[i, 1] = DP[i - 1, 1] + DP[i - 2, 1];
    }
    Console.WriteLine($"{DP[n, 0]} {DP[n, 1]}");
}