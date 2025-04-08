var dp = new int[15, 15];

for(int i = 0; i < 15; i++)
    dp[0,i] = i+1;

for(int k = 1; k < 15; k++)
{
    int sum = 0;
    for(int n = 0; n < 15; n++)
    {
        sum += dp[k-1, n]; // 이러면 0에서 전 인덱스를 불러올 필요가 없어짐. 
        dp[k,n] = sum; // 누적합문제라 이렇게 해주면 더 간결
    }
}

int T = int.Parse(Console.ReadLine());
while (T-- > 0)
{
    int k = int.Parse(Console.ReadLine());
    int n = int.Parse(Console.ReadLine());

    Console.WriteLine(dp[k, n - 1]);
}