using System.Text;
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
int n = int.Parse(Console.ReadLine());

StringBuilder sb = new();

for (int i = 1; i <= n; i++)
{
    sb.AppendLine($"{i}");
}
sw.Write(sb.ToString());