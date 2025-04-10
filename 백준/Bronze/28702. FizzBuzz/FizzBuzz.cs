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

string[] input = new string[3];

for (int i = 0; i < 3; i++)
{
    input[i] = Console.ReadLine();
    if (CheckNumber(input[i]))
    {
        PrintNextString(int.Parse(input[i]) + (3 - i));
        return;
    }
}