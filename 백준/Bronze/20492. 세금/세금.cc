// 20492. 세금

#include <iostream>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.0f %.0f", n * 0.78, n - (n * 0.2 * 0.22));
}