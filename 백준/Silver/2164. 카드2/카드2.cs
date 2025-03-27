int n = int.Parse(Console.ReadLine());
var c = new Queue<int>();
for(int i = 1; i <= n; i++)
    c.Enqueue(i);
for(int i = 1; i < n; i++){
    c.Dequeue();
    c.Enqueue(c.Dequeue());
}
Console.Write(c.Dequeue());