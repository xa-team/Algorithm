int n = int.Parse(Console.ReadLine());
int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
int[] count = new int[202];
Array.Fill(count, 0);
foreach (int i in input)
{
    count[i + 101]++;
}
Console.Write(count[int.Parse(Console.ReadLine()) + 101]);