int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

int[] numArr = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);

List<int> sortedArr = numArr.Where(x => x < input[1]).ToList();

Console.Write(string.Join(" ", sortedArr));