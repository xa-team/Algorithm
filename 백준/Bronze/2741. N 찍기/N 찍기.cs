using System.Text;

int n = int.Parse(Console.ReadLine());

StringBuilder sb = new();

for (int i = 1; i <= n; i++)
{
    sb.AppendLine($"{i}");
}
Console.Write(sb.ToString());