using System.Text;

int n = int.Parse(Console.ReadLine());
int[] seq = new int[n];
for (int i = 0; i < n; i++) seq[i] = int.Parse(Console.ReadLine());

var st = new Stack<int>(n);
var sb = new StringBuilder();

int num = 1;
int index = 0;

while (num <= n || st.Count > 0)
{
    if (st.Count > 0 && st.Peek() == seq[index])
    {
        st.Pop();
        sb.AppendLine("-");
        index++;
    }
    else if (num <= n)
    {
        st.Push(num++);
        sb.AppendLine("+");
    }
    else
    {
        Console.Write("NO");
        return;
    }
}

Console.Write(sb.ToString());