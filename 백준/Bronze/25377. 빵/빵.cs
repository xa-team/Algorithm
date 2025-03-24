using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int n = int.Parse(sr.ReadLine());
List<int> arr = new();
for(int i = 0; i < n; i++){
    int[] tmp = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
    if(tmp[1] - tmp[0] >= 0)
        arr.Add(tmp[1]);
}
sw.Write(arr.Min());