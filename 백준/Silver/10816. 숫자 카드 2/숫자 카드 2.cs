using System.Text;

using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
StringBuilder sb = new StringBuilder();

Dictionary<int, int> hashMap = new Dictionary<int, int>();
sr.ReadLine(); // n 입력 받는데 n 필요없음.
int[] str1 = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);

// 숫자들을 입력 받고 hashMap에 있는지 체크 후 없으면 1, 있으면 +1
foreach(int i in str1){
    if(hashMap.TryGetValue(i, out int cnt))
        hashMap[i] = cnt+1;
    else
        hashMap[i] = 1;
}

sr.ReadLine();
int[] str2 = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);

// 숫자들이 있는지 체크 후 있으면 출력하고, 없으면 0 출력
foreach(int i in str2)
    if(hashMap.TryGetValue(i, out int value))
        sb.Append($"{value} ");
    else
        sb.Append("0 ");
sw.Write(sb);