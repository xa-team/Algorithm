using System.Text;

using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int n = int.Parse(sr.ReadLine());

StringBuilder sb = new();

while (n-- > 0)
{
    string str = sr.ReadLine();
    int streak = 0;
    int sum = 0;

    foreach (char c in str)
    {
        if (c == 'O')
        {
            streak++;
            if (streak > 1)
            {
                sum += streak;
            }
            else
            {
                sum++;
            }
        }
        else
        {
            streak = 0;
        }
    }
    sb.AppendLine(sum.ToString());
}
sw.Write(sb.ToString());