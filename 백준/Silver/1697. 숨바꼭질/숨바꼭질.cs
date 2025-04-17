using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        int[] input = Array.ConvertAll(Console.ReadLine().Split(), int.Parse);
        int start = input[0];
        int end = input[1];

        // start가 end보다 크거나 같으면 바로 차이만큼 출력
        if (start >= end)
        {
            Console.WriteLine(start - end);
            return;
        }

        // 큐와 방문 기록 배열
        Queue<int> queue = new Queue<int>();
        int[] dist = new int[100001];  // 최대 범위는 100000, dist[i]는 i까지의 최소 시간

        // 시작점 설정
        queue.Enqueue(start);
        dist[start] = 0;

        while (queue.Count > 0)
        {
            int current = queue.Dequeue();

            // 목표지점에 도달하면 종료
            if (current == end)
            {
                Console.WriteLine(dist[current]);
                return;
            }

            // 이동 방법 3가지
            // 1. x + 1
            if (current + 1 <= 100000 && dist[current + 1] == 0)
            {
                dist[current + 1] = dist[current] + 1;
                queue.Enqueue(current + 1);
            }

            // 2. x - 1
            if (current - 1 >= 0 && dist[current - 1] == 0)
            {
                dist[current - 1] = dist[current] + 1;
                queue.Enqueue(current - 1);
            }

            // 3. x * 2
            if (current * 2 <= 100000 && dist[current * 2] == 0)
            {
                dist[current * 2] = dist[current] + 1;
                queue.Enqueue(current * 2);
            }
        }
    }
}
