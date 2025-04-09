using System.Text;

int n = int.Parse(Console.ReadLine());

var seq = new int[n];
for (int i = 0; i < n; i++) seq[i] = int.Parse(Console.ReadLine());

var st = new Stack<int>(n);
var sb = new StringBuilder();

int cnt = 1;
int index = 0;
st.Push(cnt++);
sb.AppendLine("+");
while (true)
{
    if (index == n - 1 || cnt == n + 1)
    {
        break;
    }
    else if (st.TryPeek(out int top) && (top == seq[index]))
    {
        st.Pop();
        index++;
        sb.AppendLine("-");
    }
    else
    {
        st.Push(cnt++);
        sb.AppendLine("+");
    }
}
while (st.Count > 0)
{
    if (st.Peek() != seq[index++])
    {
        Console.Write("NO");
        return;
    }
    st.Pop();
    sb.AppendLine("-");
}
Console.Write(sb);