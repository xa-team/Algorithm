using System.Numerics;
using System.Text;

using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
StringBuilder sb = new StringBuilder();

int n = int.Parse(sr.ReadLine());
string[] str = sr.ReadLine().Split();
Dictionary<BigInteger, int> numDic = new Dictionary<BigInteger, int>(n);
for(int i = 0; i < n; i++)
    numDic[BigInteger.Parse(str[i])] = 1;

sr.ReadLine();
BigInteger[] biArr = Array.ConvertAll(sr.ReadLine().Split(), BigInteger.Parse);
foreach(BigInteger a in biArr)
    sb.AppendLine(numDic.ContainsKey(a) ? "1" : "0");
sw.Write(sb.ToString());