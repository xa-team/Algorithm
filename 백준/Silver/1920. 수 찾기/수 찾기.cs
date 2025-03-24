using System.Numerics;
using System.Text;

using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
StringBuilder sb = new StringBuilder();

int n = int.Parse(sr.ReadLine());
string[] str = sr.ReadLine().Split();
Dictionary<int, int> numDic = new Dictionary<int, int>(n);
for(int i = 0; i < n; i++)
    numDic[int.Parse(str[i])] = 1;

sr.ReadLine();
int[] biArr = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
foreach(int a in biArr)
    sb.AppendLine(numDic.ContainsKey(a) ? "1" : "0");
sw.Write(sb.ToString());