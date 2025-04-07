int n = int.Parse(Console.ReadLine());
int cnt = 0;

while (n > 0)
{
    cnt += n / 5;
    n /= 5;
}

Console.Write(cnt);