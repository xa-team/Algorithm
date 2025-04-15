using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

int n = int.Parse(sr.ReadLine());
if (n == 0)
{
    Console.Write(0);
    return;
}
int except = (int)Math.Round(n * 0.15, MidpointRounding.AwayFromZero);

List<int> review = new();
for (int i = 0; i < n; i++)
{
    review.Add(int.Parse(sr.ReadLine()));
}

review.Sort();
review.RemoveRange(n - except, except);
review.RemoveRange(0, except);

double sum = review.Sum();
double trimmedMean = Math.Round(sum / review.Count, MidpointRounding.AwayFromZero);
Console.Write(trimmedMean);