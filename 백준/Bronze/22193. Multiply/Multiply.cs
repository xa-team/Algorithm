using System.Numerics;

using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

sr.ReadLine();
BigInteger a = BigInteger.Parse(sr.ReadLine());
BigInteger b = BigInteger.Parse(sr.ReadLine());
sw.WriteLine(a*b);