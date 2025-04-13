int n = int.Parse(Console.ReadLine());

while (n-- > 0)
{
    string[] str = Console.ReadLine().Split();
    long a = long.Parse(str[0]);
    long b = long.Parse(str[2]);
    long c = long.Parse(str[4]);
    switch (str[1])
    {
        case "+":
            Console.WriteLine(a + b == c ? "correct" : "wrong answer");
            break;
        case "-":
            Console.WriteLine(a - b == c ? "correct" : "wrong answer");
            break;
        case "*":
            Console.WriteLine(a * b == c ? "correct" : "wrong answer");
            break;
        case "/":
            Console.WriteLine(a / b == c ? "correct" : "wrong answer");
            break;
    }
}