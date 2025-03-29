int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
int n = input[0];
int k = input[1];
int top = 1, bot = 1;

for(int i = 0; i < k; i++)
{
    top *= n - i;
    bot *= k - i;
}

Console.Write(top/bot);