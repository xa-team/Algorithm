using System.Numerics;

int length = int.Parse(Console.ReadLine());
BigInteger hash = 0;
BigInteger R = 1;
int MOD = 1234567891;
string str = Console.ReadLine();

for(int i = 0; i < length; i++)
{
    int num = str[i] - 96;
    hash += num * R;
    R *= 31;

    hash %= MOD;
    R %= MOD;
}

Console.Write(hash);