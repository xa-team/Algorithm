int length = int.Parse(Console.ReadLine());
int hash = 0;

string str = Console.ReadLine();

for(int i = 0; i < length; i++)
{
    int num = str[i] - 96;
    hash += num * (int)Math.Pow(31, i);
}

Console.Write(hash);