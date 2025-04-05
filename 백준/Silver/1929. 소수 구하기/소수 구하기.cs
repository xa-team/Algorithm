using System.Text;

int[] numArr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
int m = numArr[0];
int n = numArr[1];

bool[] isPrimeArr = new bool[n+1];

for(int i = 2; i <= n; i++) isPrimeArr[i] = true;

for(int i = 2; i * i <= n; i++)
{
    if(!isPrimeArr[i]) continue;

    for(int j = i * i; j <= n; j += i)
    {
        isPrimeArr[j] = false;
    }
}

var sb = new StringBuilder();

for(int i = m; i <= n; i++)
{
    if(isPrimeArr[i]) sb.AppendLine(i.ToString());
}

Console.Write(sb);