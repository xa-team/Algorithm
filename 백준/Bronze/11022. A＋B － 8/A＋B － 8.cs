int n = int.Parse(Console.ReadLine());

for(int i = 0; i < n; i++)
{
    int[] numArr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
    Console.WriteLine($"Case #{i+1}: {numArr[0]} + {numArr[1]} = {numArr[0] + numArr[1]}");
}