using System.Text;

using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int[] input = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
int N = input[0];
int M = input[1];
int[,] graph = makeGraph(N, M, out int goalX, out int goalY);
int[,] shortestDistance = GetShortestDistanceByBFS(graph, goalX, goalY);
printAnswer(shortestDistance, graph, N, M, (goalX, goalY));



int[,] makeGraph(int N, int M, out int goalX, out int goalY)
{
    int[,] graph = new int[N + 1, M + 1];
    goalX = 0;
    goalY = 0;

    for (int y = 1; y <= N; y++)
    {
        int[] input = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
        for (int x = 1; x <= M; x++)
        {
            if (input[x - 1] > 0)
            {
                if (input[x - 1] == 2)
                {
                    goalX = x;
                    goalY = y;
                }
                graph[y, x] = 1;
            }
            else
            {
                graph[y, x] = 0;
            }
        }
    }

    return graph;
}

int[,] GetShortestDistanceByBFS(int[,] graph, int goalX, int goalY)
{
    int[] dx = { -1, 1, 0, 0 };
    int[] dy = { 0, 0, -1, 1 };

    int[,] shortestDistance = new int[N + 1, M + 1];
    bool[,] visited = new bool[N + 1, M + 1];
    Queue<(int x, int y)> queue = new();

    visited[goalY, goalX] = true;
    shortestDistance[goalY, goalX] = 0;
    queue.Enqueue((goalX, goalY));
    while (queue.Count > 0)
    {
        var (x, y) = queue.Dequeue();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx < 1 || ny < 1 || nx > M || ny > N)
            {
                continue;
            }
            if (visited[ny, nx] || graph[ny, nx] == 0)
            {
                continue;
            }

            visited[ny, nx] = true;
            queue.Enqueue((nx, ny));
            shortestDistance[ny, nx] = shortestDistance[y, x] + 1;
        }
    }

    return shortestDistance;
}

void printAnswer(int[,] shortestDistance, int[,] graph, int N, int M, ValueTuple<int, int> goalPoint)
{
    StringBuilder sb = new();
    for (int y = 1; y <= N; y++)
    {
        for (int x = 1; x <= M; x++)
        {
            int distance = shortestDistance[y, x];
            if (distance == 0 && graph[y, x] != 0 && (x, y) != goalPoint)
            {
                sb.Append($"{-1} ");
            }
            else
            {
                sb.Append($"{distance} ");
            }
        }
        sb.AppendLine();
    }
    sw.Write(sb.ToString());
}