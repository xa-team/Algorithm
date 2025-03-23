using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int n = int.Parse(sr.ReadLine());
List<(int x, int y)> c = new List<(int x, int y)>();

for(int i = 0; i < n; i++){
    int[] t = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
    c.Add((t[0], t[1]));
}

var s = c.OrderBy(x => x).ThenBy(y => y).ToList();

foreach(var (x, y) in s)
    sw.Write($"{x} {y}\n");