bool CheckNumber(string str)
{
    if (str == "Fizz" || str == "Buzz" || str == "FizzBuzz")
    {
        return false;
    }

    return true;
}

void PrintNextString(int n)
{
    if (n % 3 == 0)
    {
        if (n % 5 == 0)
        {
            Console.Write("FizzBuzz");
        }
        else
        {
            Console.Write("Fizz");
        }
    }
    else
    {
        if (n % 5 == 0)
        {
            Console.Write("Buzz");
        }
        else
        {
            Console.Write(n);
        }
    }
}

for (int i = 0; i < 3; i++)
{
    string str = Console.ReadLine();
    if (CheckNumber(str))
    {
        PrintNextString(int.Parse(str) + (3 - i));
        return;
    }
}