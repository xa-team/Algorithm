using System.Numerics;

BigInteger[] numArr = Array.ConvertAll(Console.ReadLine().Split(), BigInteger.Parse);
BigInteger a = numArr[0];
BigInteger b = numArr[1];

Console.Write(a+b);