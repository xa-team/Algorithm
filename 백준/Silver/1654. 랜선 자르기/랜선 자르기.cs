StreamReader sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

long[] numArr = Array.ConvertAll(sr.ReadLine().Split(), long.Parse);
long K = numArr[0];
long N = numArr[1];

List<long> lanCable = new();
for (int i = 0; i < K; i++) lanCable.Add(long.Parse(sr.ReadLine()));

long right = lanCable.Max();
long left = 1;
long maxLen = 0;
while (left <= right)
{
    long mid = (left + right) / 2;
    long cnt = 0;

    foreach (long len in lanCable)
    {
        cnt += len / mid;
    }

    if (cnt >= N)
    {
        maxLen = mid;
        left = mid + 1;
    }
    else
    {
        right = mid - 1;
    }
}
Console.Write(maxLen);