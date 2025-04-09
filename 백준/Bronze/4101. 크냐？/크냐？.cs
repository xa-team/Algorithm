while (true)
{
    int[] arr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
    if (arr.Sum() == 0) return;

    Console.WriteLine(arr[0] > arr[1] ? "Yes" : "No");
}