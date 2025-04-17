using System.Text;

int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
int answer = input[1] * input[0];
StringBuilder sb = new();
IEnumerable<int> report = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

foreach (int i in report)
{
    sb.Append($"{i - answer} ");
}
Console.Write(sb.ToString());