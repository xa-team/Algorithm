int n = int.Parse(Console.ReadLine()), T = 0;
double[] tG = Array.ConvertAll(Console.ReadLine().Split(), double.Parse);
int[] O = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

foreach(var i in tG)
    T += (int)Math.Ceiling(i/O[0]);
Console.WriteLine($"{T}\n{n/O[1]} {n%O[1]}");