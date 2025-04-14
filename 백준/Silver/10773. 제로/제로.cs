using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

int k = int.Parse(sr.ReadLine());

Stack<int> st = new();
int sum = 0;
while (k-- > 0)
{
    int n = int.Parse(sr.ReadLine());

    if (n == 0)
    {
        sum -= st.Pop();
    }
    else
    {
        st.Push(n);
        sum += n;
    }
}
Console.Write(sum);