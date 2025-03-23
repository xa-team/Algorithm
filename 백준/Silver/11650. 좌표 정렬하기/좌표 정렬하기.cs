using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int n = int.Parse(sr.ReadLine());
List<(int x, int y)> coordnatesList = new List<(int x, int y)>();

for(int i = 0; i < n; i++){
    int[] tmpCoordnates = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
    coordnatesList.Add((tmpCoordnates[0], tmpCoordnates[1]));
}

var sortedList = coordnatesList.OrderBy(x => x).ThenBy(y => y).ToList();

foreach(var (x, y) in sortedList)
    sw.WriteLine($"{x} {y}");