using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

int k = int.Parse(sr.ReadLine());

Stack<int> st = new();

while (k-- > 0)
{
    int n = int.Parse(sr.ReadLine());

    if (n == 0)
    {
        st.Pop();
    }
    else
    {
        st.Push(n);
    }
}
Console.Write(st.Sum());