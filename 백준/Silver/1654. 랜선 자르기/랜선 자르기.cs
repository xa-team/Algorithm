using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

long[] input = Array.ConvertAll(sr.ReadLine().Split(), long.Parse);
int K = (int)input[0];
long N = input[1];

long[] cables = new long[K];
for (int i = 0; i < K; i++) cables[i] = long.Parse(sr.ReadLine());

long right = cables.Max();
long left = 1;
long result = 0;

while (left <= right)
{
    long mid = (left + right) / 2;
    long count = 0;

    foreach (long cable in cables)
    {
        count += cable / mid;
    }

    if (count >= N)
    {
        result = mid;
        left = mid + 1;
    }
    else
    {
        right = mid - 1;
    }
}

Console.Write(result);