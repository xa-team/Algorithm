using System.Text;

int n = int.Parse(Console.ReadLine());

List<(int x, int y)> points = new(n);

while (n-- > 0)
{
    string[] tmp = Console.ReadLine().Split();
    points.Add((int.Parse(tmp[0]), int.Parse(tmp[1])));
}

var sortedList =
    points.OrderBy(x => x.y)
    .ThenBy(x => x.x)
    .ToList();

StringBuilder sb = new();

foreach ((int x, int y) in sortedList)
{
    sb.AppendLine($"{x} {y}");
}
Console.Write(sb.ToString());