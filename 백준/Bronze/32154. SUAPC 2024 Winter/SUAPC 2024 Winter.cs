string[, ] board = {{"11", "A B C D E F G H J L M"},
					   {"9", "A C E F G H I L M"},
					   {"9", "A C E F G H I L M"},
					   {"9", "A B C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A C E F G H L M"},
					   {"8", "A B C F G H L M"}};
int n = int.Parse(Console.ReadLine())-1;
Console.WriteLine($"{board[n, 0]}\n{board[n, 1]}");