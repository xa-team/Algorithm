int n = int.Parse(Console.ReadLine());
float[] score = Array.ConvertAll(Console.ReadLine().Split(), float.Parse);
Console.WriteLine(score.Sum()/score.Max()*100/n);