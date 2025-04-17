int n = int.Parse(Console.ReadLine());
IEnumerable<int> input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
int[] count = new int[201];
Array.Fill(count, 0);
foreach (int i in input)
{
    count[i + 100]++;
}
Console.Write(count[int.Parse(Console.ReadLine()) + 100]);