double sum = 0;
for (int i = 0; i < 5; i++)
{
    int a = int.Parse(Console.ReadLine());

    if (a > 40)
    {
        sum += a;
    }
    else
    {
        sum += 40;
    }
}
Console.Write(sum / 5);