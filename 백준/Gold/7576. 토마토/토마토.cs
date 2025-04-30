using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));
using var sw = new StreamWriter(new BufferedStream(Console.OpenStandardOutput()));

int[] input = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
int M = input[0];
int N = input[1];


//그래프 만드는 함수
int[,] graph = new int[N, M];
List<(int y, int x)> startPoints = new List<(int y, int x)>();
Queue<(int x, int y)> queue = new();

int unripeCount = 0; // 익어야할 토마토 개개수
int ripeCount = 0; // 익은 토마토 개수(BFS로 익힌 것만만)

for (int y = 0; y < N; y++)
{
    int[] arr = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);

    for (int x = 0; x < M; x++)
    {
        graph[y, x] = arr[x];
        if (arr[x] == 1)
        {
            queue.Enqueue((x, y)); //초기 상태에서 익어있는 토마토
        }
        else if (arr[x] == 0)
        {
            unripeCount++;
        }
    }
}

//BFS
int[] dx = { -1, 1, 0, 0 };
int[] dy = { 0, 0, -1, 1 };

int day = -1;

while (queue.Count > 0)
{
    int queueSize = queue.Count;
    day++; // 하루 경과

    for (int i = 0; i < queueSize; i++)
    {
        var (x, y) = queue.Dequeue();
        for (int direction = 0; direction < 4; direction++)
        {
            int nextX = x + dx[direction];
            int nextY = y + dy[direction];

            if (nextX < 0 || nextY < 0 || nextX >= M || nextY >= N) continue;
            if (graph[nextY, nextX] != 0) continue;

            graph[nextY, nextX] = 1;
            queue.Enqueue((nextX, nextY));
            ripeCount++;
        }
    }
}

// 안 익어있던 토마토가 전부 익었는지 확인
Console.Write(ripeCount == unripeCount ? day : -1);