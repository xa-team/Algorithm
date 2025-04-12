int n = int.Parse(Console.ReadLine());

double year = 2024;
int month = 8;

year += (n - 1) * 7 / 12;
if (month + (n - 1) * 7 % 12 > 12)
{
    year++;
    month += ((n - 1) * 7 % 12) - 12;
}
else
{
    month += (n - 1) * 7 % 12;
}

Console.Write($"{year} {month}");