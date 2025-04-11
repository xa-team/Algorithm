int N = int.Parse(Console.ReadLine());
int count = 1;
string tmpStr = "666";
for (int i = 667; count < N; i++)
{
    tmpStr = i.ToString();
    if (tmpStr.Contains("666"))
    {
        count++;
    }
}
Console.Write(tmpStr);