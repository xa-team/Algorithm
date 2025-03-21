using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

sr.ReadLine();
int a = int.Parse(sr.ReadLine());
int b = int.Parse(sr.ReadLine());
sw.WriteLine(a*b);