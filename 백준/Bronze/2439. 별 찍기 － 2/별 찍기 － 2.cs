using System.Text;

int n = int.Parse(Console.ReadLine());

for (int i = 0; i < n; i++)
{
    StringBuilder sb = new();
    for (int j = n - i; j > 1; j--)
    {
        sb.Append(' ');
    }
    for (int j = 0; j <= i; j++)
    {
        sb.Append('*');
    }
    Console.WriteLine(sb.ToString());
}