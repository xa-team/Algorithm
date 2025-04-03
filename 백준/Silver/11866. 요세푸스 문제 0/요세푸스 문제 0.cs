using System.Text;

StringBuilder sb = new StringBuilder();

int[] numArr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

int n = numArr[0];
int k = numArr[1];

List<int> list = new List<int>(n);
for(int i = 1; i <= n; i++)
{
    list.Add(i);
}

int size = n;
int index = 0;

sb.Append('<');

while(size > 0)
{
    index += k-1;
    while(index >= size)
    {
        index -= size;
    }
    sb.Append(list[index]);
    list.RemoveAt(index);
    size--;
    if(size != 0)
    {
        sb.Append(", ");
    }
}

sb.Append('>');

Console.Write(sb);