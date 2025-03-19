int F() => int.Parse(Console.ReadLine());
int n = F();
int[] arr = new int[n];
for(int i = 0; i < n; i++)
    arr[i] = F();
Array.Sort(arr);
Console.WriteLine(string.Join("\n", arr));