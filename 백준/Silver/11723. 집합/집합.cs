using System.Text;
using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int n = int.Parse(sr.ReadLine());
StringBuilder sb = new();

int bitSet = 0;
while (n-- > 0)
{
    string[] input = sr.ReadLine().Split();
    int num;
    switch (input[0])
    {
        case "add":
            num = int.Parse(input[1]) - 1;
            bitSet |= 1 << num;
            break;
        case "remove":
            num = int.Parse(input[1]) - 1;
            bitSet &= ~(1 << num);
            break;
        case "check":
            num = int.Parse(input[1]) - 1;
            sb.AppendLine((bitSet & (1 << num)) != 0 ? "1" : "0");
            break;
        case "toggle":
            num = int.Parse(input[1]) - 1;
            bitSet ^= 1 << num;
            break;
        case "all":
            bitSet = (1 << 20) - 1;
            break;
        case "empty":
            bitSet = 0;
            break;
    }
}
sw.Write(sb.ToString());