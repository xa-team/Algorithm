using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

sr.ReadLine();
ulong a = ulong.Parse(sr.ReadLine());
ulong b = ulong.Parse(sr.ReadLine());
sw.WriteLine(a*b);