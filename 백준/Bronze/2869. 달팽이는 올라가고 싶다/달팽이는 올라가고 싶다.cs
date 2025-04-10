int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
int A = input[0];
int B = input[1];
int V = input[2];

Double Goal = V - A;

Console.Write(Math.Ceiling(Goal / (A - B) + 1));