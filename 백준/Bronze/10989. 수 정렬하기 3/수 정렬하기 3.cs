using System.Text;

using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));
StringBuilder sb = new StringBuilder();

int n = int.Parse(sr.ReadLine());
int max = 0;
int[] numCount = new int[10001];

for(int i = 0; i < n; i++){
    int tmp = int.Parse(sr.ReadLine());
    max = Math.Max(tmp, max);
    numCount[tmp]++;
}
    

for(int i = 1; i <= max; i++)
    for(int j = 1; j <= numCount[i]; j++)
        sw.Write($"{i}\n");