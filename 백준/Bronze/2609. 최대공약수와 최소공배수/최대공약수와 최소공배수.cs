int G(int a, int b) => b == 0 ? a : G(b, a%b);
int[] n = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
int x = G(n[0], n[1]);
Console.WriteLine($"{x}\n{n[1]*n[0]/x}");