using System.Numerics;

BigInteger[] arr = Array.ConvertAll(Console.ReadLine().Split(), BigInteger.Parse);

Console.Write(arr[0] * arr[1]);