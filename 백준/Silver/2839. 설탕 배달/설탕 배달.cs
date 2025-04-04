int n = int.Parse(Console.ReadLine());
int cnt = 5000;
int tmp = n;

if (n % 3 == 0)
{
    cnt = n / 3;
}

if (n % 5 == 0)
{
    cnt = Math.Min(cnt, n / 5);
}

for (int i = 0; tmp > 0; i++, tmp -= 5)
{
    if (tmp % 3 == 0)
    {
        int tmpCnt = 0;
        tmpCnt += i;
        tmpCnt += tmp / 3;
        cnt = Math.Min(cnt, tmpCnt);
    }
}

Console.Write(cnt != 5000 ? cnt : -1);