using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int T = int.Parse(sr.ReadLine());

while (T-- > 0)
{
    int[] input = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
    int H = input[0];
    int W = input[1];
    int N = input[2];
    sw.WriteLine("{0}{1:D2}", N % H == 0 ? H : N % H, N % H == 0 ? N / H : N / H + 1);
}