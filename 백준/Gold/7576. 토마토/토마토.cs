using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int[] input = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
int M = input[0];
int N = input[1];


//그래프 만드는 함수
int[,] graph = new int[N, M];
List<(int y, int x)> startPoints = new List<(int y, int x)>();
int wallCount = 0;

for (int y = 0; y < N; y++)
{
    int[] arr = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);

    for (int x = 0; x < M; x++)
    {
        graph[y, x] = arr[x];
        if (arr[x] == 1)
        {
            startPoints.Add((y, x));
        }
        else if (arr[x] == -1)
        {
            wallCount++;
        }
    }
}

//BFS
int[] dx = { -1, 1, 0, 0 };
int[] dy = { 0, 0, -1, 1 };

int dayCount = 0;
int queueSize = startPoints.Count;

Queue<(int x, int y, int day)> queue = new();
foreach (var coords in startPoints)
{
    queue.Enqueue((coords.x, coords.y, 0));
}

while (queue.Count > 0)
{
    var (x, y, day) = queue.Dequeue();

    for (int direction = 0; direction < 4; direction++)
    {
        int nextX = x + dx[direction];
        int nextY = y + dy[direction];

        if (nextX < 0 || nextY < 0 || nextX >= M || nextY >= N)
        {
            continue;
        }
        if (graph[nextY, nextX] == 0)
        {
            graph[nextY, nextX] = 1;
            queue.Enqueue((nextX, nextY, day + 1));
        }
        else
        {
            continue;
        }
    }
    if (day > dayCount)
    {
        dayCount++;
    }
}

int sum = 0;
for (int i = 0; i < N; i++)
{
    for (int j = 0; j < M; j++)
    {
        sum += graph[i, j];
    }
}

Console.Write(sum == N * M - (wallCount * 2) ? dayCount : -1);