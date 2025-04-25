using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int n = int.Parse(sr.ReadLine());

int[] balloons = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
int[] arrows = new int[1000002];

foreach (int height in balloons)
{
    if (arrows[height + 1] > 0)
    {
        arrows[height + 1]--;
        arrows[height]++;
    }
    else
    {
        arrows[height]++;
    }
}

sw.Write(arrows.Sum());