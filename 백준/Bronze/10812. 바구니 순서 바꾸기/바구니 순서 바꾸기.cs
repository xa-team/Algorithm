int[] info = Array.ConvertAll(Console.ReadLine().Split(), int.Parse); // 0: n, 1 : m
int[,] rotateInfo = new int[info[1], 3]; // 0 : i, 1 : j, 2 : k
int[] basket = new int[info[0]];
for (int i = 0; i < info[0]; i++)
    basket[i] = i + 1;
for (int i = 0; i < info[1]; i++)
{
    var tmp = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
    for (int j = 0; j < 3; j++)
        rotateInfo[i, j] = tmp[j];
}

for (int i = 0; i < info[1]; i++)
{
    int[] tmp = new int[info[0]];
    for (int j = 0; j < info[0]; j++)
        tmp[j] = basket[j];
    int start = rotateInfo[i, 0], end = rotateInfo[i, 1], mid = rotateInfo[i, 2];
    for (int a = 0; a <= end - mid; a++)
    {
        tmp[start - 1 + a] = basket[mid - 1 + a];
    }
    for (int j = start; j < mid; j++)
    {
        tmp[j + (end - mid)] = basket[j - 1];
    }
    basket = tmp;
}
Console.Write(string.Join(" ", basket));