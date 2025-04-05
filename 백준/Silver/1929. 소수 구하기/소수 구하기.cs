int[] numArr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

int m = numArr[0];
int n = numArr[1];

bool[] isPrimeArr = new bool[n+1];

for(int i = 2; i <= n; i++)
{
    isPrimeArr[i] = true;
}

for(int i = 2; i <= n; i++)
{
    if(isPrimeArr[i] == false)
    {
        continue;
    }

    for(int j = i * 2; j <= n; j += i)
    {
        isPrimeArr[j] = false;
    }
}
for(int i = m; i <= n; i++)
{
    if(isPrimeArr[i])
    {
        Console.WriteLine(i);
    }
}