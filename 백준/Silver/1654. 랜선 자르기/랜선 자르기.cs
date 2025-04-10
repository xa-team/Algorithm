//6236KB, 56ms, 658B

using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

long[] input = Array.ConvertAll(sr.ReadLine().Split(), long.Parse);
int K = (int)input[0];
long N = input[1];

long[] cableArr = new long[K]; // 리스트보다 배열이 빠르고 메모리 덜 먹음.
for (int i = 0; i < K; i++) cableArr[i] = long.Parse(sr.ReadLine());

Span<long> cables = cableArr; // Span으로 감쌈.

long right = cables[0];
for (int i = 1; i < cables.Length; i++) // Max 구하는거 Span으로 감쌌기에 lINQ보다 배열 순회가 빠름.
{
    if (cables[i] > right) right = cables[i];
}

long left = 1;
long result = 0;

while (left <= right)
{
    long mid = (left + right) / 2;
    long count = 0;

    foreach (long cable in cableArr)
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