// 2739 구구단

#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        
    }
}