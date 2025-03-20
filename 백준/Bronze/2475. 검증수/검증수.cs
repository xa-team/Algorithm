int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
double sum = 0;
for(int i = 0; i < 5; i++)
    sum += Math.Pow(n[i], 2);
Console.WriteLine(sum%10);