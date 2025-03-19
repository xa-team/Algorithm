int[] a = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
int[] numArr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
foreach(int i in numArr)
    if(i < a[1])
        Console.Write($"{i} ");