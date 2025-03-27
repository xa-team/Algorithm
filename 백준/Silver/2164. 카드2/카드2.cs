int n = int.Parse(Console.ReadLine());
Queue<int> card = new Queue<int>();

for(int i = 1; i <= n; i++)
    card.Enqueue(i);
for(int i = 0; i < n-1; i++){
    card.Dequeue();
    card.Enqueue(card.Dequeue());
}
Console.Write(card.Dequeue());