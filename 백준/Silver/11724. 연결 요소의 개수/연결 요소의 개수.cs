using var sr = new StreamReader(new BufferedStream(Console.OpenStandardInput()));

int[] input = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
int N = input[0];
int M = input[1];

List<int>[] graph = makeGraph(N, M);
Console.Write(getConnectedComponent(N, graph));


List<int>[] makeGraph(int N, int M)
{
    List<int>[] graph = new List<int>[N + 1];
    for (int i = 1; i <= N; i++)
    {
        graph[i] = new List<int>();
    }

    while (M-- > 0)
    {
        int[] tmp = Array.ConvertAll(sr.ReadLine().Split(), int.Parse);
        graph[tmp[0]].Add(tmp[1]);
        graph[tmp[1]].Add(tmp[0]);
    }
    return graph;
}


void BFS(List<int>[] graph, bool[] visited, int start)
{
    visited[start] = true;
    Queue<int> queue = new();

    queue.Enqueue(start);

    while (queue.Count > 0)
    {
        int current = queue.Dequeue();

        foreach (int neighbor in graph[current])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                queue.Enqueue(neighbor);
            }
        }
    }
}


int getConnectedComponent(int N, List<int>[] graph)
{
    bool[] visited = new bool[N + 1];
    int answer = 0;
    for (int i = 1; i <= N; i++)
    {
        if (!visited[i])
        {
            BFS(graph, visited, i);
            answer++;
        }
    }
    return answer;
}