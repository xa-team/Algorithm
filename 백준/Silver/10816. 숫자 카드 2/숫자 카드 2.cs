using System.Text;

using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
StringBuilder sb = new StringBuilder();

Dictionary<int, int> hashMap = new Dictionary<int, int>();
sr.ReadLine();
int[] str1 = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
foreach(int i in str1){
    if(hashMap.TryGetValue(i, out int cnt))
        hashMap[i] = cnt+1;
    else
        hashMap[i] = 1;
}

sr.ReadLine();
int[] str2 = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
foreach(int i in str2)
    if(hashMap.TryGetValue(i, out int value))
        sb.Append($"{value} ");
    else
        sb.Append("0 ");
sw.Write(sb);