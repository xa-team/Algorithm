string str = Console.ReadLine();

for (char i = 'a'; i <= 'z'; i++)
{
    Console.Write($"{str.IndexOf(i)} ");
}