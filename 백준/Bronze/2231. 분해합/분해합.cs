int n = int.Parse(Console.ReadLine());

int digitSum = 1000000, tmp = 0, danwi = 0;


for (int j = 1000000; ; j /= 10)
    if (n % j != n){
        danwi = j;
        break;
    }
// Console.WriteLine(danwi);
for (int j = 1; j <= n; j++)
{ // 각 자리 숫자의 합을 구하는 반복문
    tmp = 0;
    for (int k = 10; k <= danwi * 10; k *= 10)
        tmp += j % k / (k / 10);

    if (j + tmp == n)
    {
        digitSum = j;
        break;
    }
}
Console.Write((digitSum == 1000000) ? "0" : digitSum);