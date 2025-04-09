int T = int.Parse(Console.ReadLine());
int i = 0;
while (++i <= T)
{
    var arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
    Console.WriteLine($"Case #{i}: {arr.Sum()}");
}