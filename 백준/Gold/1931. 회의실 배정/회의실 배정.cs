using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int n = int.Parse(sr.ReadLine());

List<(int open, int closed)> schedule = new(n);

for (int i = 0; i < n; i++)
{
    int[] input = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
    schedule.Add((input[0], input[1]));
}

List<(int open, int closed)> sortedSchedule =
schedule.OrderBy(x => x.closed)
        .ThenBy(x => x.open)
        .ToList();


int current = 0;
int count = 0;
foreach ((int open, int closed) in sortedSchedule)
{
    if (current <= open)
    {
        current = closed;
        count++;
    }
}

Console.Write(count);