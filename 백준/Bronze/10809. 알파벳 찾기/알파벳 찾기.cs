using System.Text;

string str = Console.ReadLine();
StringBuilder sb = new();

for (char i = 'a'; i <= 'z'; i++)
{
    sb.Append($"{str.IndexOf(i)} ");
}
Console.Write(sb.ToString());